int LongestAlterSub(int arr[], int n)
{
    /*
    As you can see from the definition and examples, there are two possible patterns of alternating subsequences:
    The last element is  than the previous element.
    The last element is SMALLER than the previous element.
    */

    // "legtp" and "lestp" intialized as 1
    int greaterThanPrevious = 1;
    int smallerThanPrevious = 1;

    // Loop from the second element
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            greaterThanPrevious = smallerThanPrevious + 1;

        else if (arr[i] < arr[i - 1])
            smallerThanPrevious = greaterThanPrevious + 1;
    }

    return max(greaterThanPrevious, smallerThanPrevious);
}