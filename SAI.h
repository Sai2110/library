
//---------------------------------------------------------------

// To find the value of a to the POWER of b (a^b)
int pow(int a, int b)
{

    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

//---------------------------------------------------------------

// BINARY SEARCH of the element in the sorted array !!!
int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
            return mid;

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else // if(key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

//---------------------------------------------------------------

// LINEAR SEARCH of the element in the array !!!
bool linearSearch(int num[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (key == num[i])
        {
            return 1;
        }
    }
    return 0;
}

//---------------------------------------------------------------

// To convert BINARY TO DECIMAL number !!!
int binToDec(int n)
{
    int i = 0, ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            // to use pow fuction add math.h header file
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    return ans;
}

//---------------------------------------------------------------

// To convert DECIMAL TO BINARY number !!!
int decToBin(int n)
{

    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    return ans;
}

//---------------------------------------------------------------

// BUBBLES SORT using TWO POINTER approach !!!
int bubbleSort(int nums[], int n)
{
    int i, ans;
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[i])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    ans = nums[i];
    return ans;
}

//---------------------------------------------------------------

// BUBBLE SORT using single pointer approach !!!
int bubbleSort2(int nums[], int n)
{
    int ans;
    int counter = 1;
    int i;
    while (counter < n)
    {
        for (i = 0; i < n - counter; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                int temp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
            }
        }
        counter++;
    }
    ans = nums[i];
    return ans;
}

//---------------------------------------------------------------

// To find if number is PRIME OR NOT !!!
bool isPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

//---------------------------------------------------------------

// fibonacii series !!!
int fibonacci(int n)
{
    int a, b;
    a = 0;
    b = 1;
    int nextnum;
    for (int i = 1; i <= n; i++)
    {
        nextnum = a + b;
        // cout<<nextnum<<" ";
        a = b;
        b = nextnum;
    }
    return nextnum;
}

//---------------------------------------------------------------

// To find FIRST OCCURANCE of element in sorted array !!!!
int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) // to go to right
        {
            s = mid + 1;
        }
        else if (key < arr[mid]) // to go to left
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

//---------------------------------------------------------------

// To find LAST OCCURANCE of element in sorted array !!!!
int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]) // to go to right
        {
            s = mid + 1;
        }
        else if (key < arr[mid]) // to go to left
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

//---------------------------------------------------------------

//  to find  FACTORIAL of n !!!
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

//---------------------------------------------------------------

// to find nCr of the any number !!! nCr= n!/r!(n-r)! .
int nCr(int n, int r)
{
    int up = factorial(n);
    int down = factorial(r) * factorial(n - r);

    int ans = up / down;

    return ans;
}

//---------------------------------------------------------------

// to find the nCr of n and r without using factorial function !!! nCr= n!/r!(n-r)!.
int nCr2(int n, int r)
{
    int prod = 1;
    for (int i = 1; i <= n; i++)
    {
        prod = prod * i;
    }
    int iprod = 1;
    for (int i = 1; i <= r; i++)
    {
        iprod = iprod * i;
    }
    int s = n - r;
    int sprod = 1;
    for (int i = 1; i <= s; i++)
    {
        sprod = sprod * i;
    }
    int ans = prod / (iprod * sprod);
    // cout<<prod<<endl;
    // cout<<iprod<<endl;
    // cout<<s<<endl;
    // cout<<sprod<<endl;
    return ans;
}

//---------------------------------------------------------------
// To find MAXIMUM element in the array !!!
int getMax(int num[], int n)
{
    int max = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

//---------------------------------------------------------------

// To find MINIMUM element in the array
int getMin(int num[], int n)
{
    int min = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

//---------------------------------------------------------------

// To find the PEAK INDEX OF ELEMENT in the MOUNTAIN ARRAY !!!
int peakIndex(int nums[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (nums[mid] < nums[mid + 1])
        {
            s = mid + 1;
        }
        else
            e = mid;
        mid = s + (e - s) / 2;
    }
    return s;
}

//---------------------------------------------------------------

//t find PIVOT index in the array !!!
int findPivot(int nums[],int n)
{
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while(s<e)
    {
        if(nums[mid]>=nums[0])
        {
            s=mid+1;
        }
        else    
            e=mid;

        mid =s+(e-s)/2;    
    }
    return s;
}

//---------------------------------------------------------------

// To REVERSE the array !!!
void reverseArray(int num[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int temp = num[start];
        num[start] = num[end];
        num[end] = temp;
        start++;
        end--;
    }
}

//---------------------------------------------------------------

// To REVERSE the number !!!
int reverseNum(int n)
{
    int reverse = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;

        reverse = (reverse * 10) + lastdigit;
        n = n / 10;
    }
    return reverse;
}

//---------------------------------------------------------------

// To find the SECOND LARGEST element in the array !!!
int secondLargest(int num[], int n)
{
    int max1, max2;
    max1 = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max1)
        {
            max2 = max1;
            max1 = num[i];
        }
        else if (num[i] > max2 && num[i] < max1)
        {
            max2 = num[i];
        }
    }
    return max2;
}

//---------------------------------------------------------------

// To SORT 1 0 in the array !!!
void sortOneZero(int num[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (num[start] == 0 && start < end)
            start++;
        if (num[end] == 1 && start < end)
            end--;
        if (num[start] != 0 || num[end] != 1)
        {
            int temp = num[start];
            num[start] = num[end];
            num[end] = temp;
            start++;
            end--;
        }
    }
}

//---------------------------------------------------------------

//To find SUM OF ARRAY elements  !!!
int sumOfArray(int num[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }
    return sum;
}

//---------------------------------------------------------------

//to find TOTAL SET BIT(1) in any BINARY number !!!
int setBit(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

//---------------------------------------------------------------

//To SWAP ALTERNATE element in the array !!!
void swapAlternate(int num[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            // swap(num[i], num[i + 1]);
            int temp=num[i];
            num[i]=num[i+1];
            num[i+1]=temp;
        }
    }
}

//---------------------------------------------------------------