#include <stdio.h>
int main()
{
    //  1 d array via user input
    /*
    int i,a;

    printf("Enter a : ");
    scanf("%d",&a);

    int arr[a];
    printf("Enter elements [%d] : \n",a);

    for (i=0;i<a;i++){
            printf("Elements %d : ",i);
            scanf("%d",&arr[i]);
    }

    printf("Array [%d] elements are : \n",a);

    for (i=0;i<a;i++){

        printf("%d  ",arr[i]);

    }
    */

    // 2d array via user input
    /*
    int i, j, n, m;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter m : ");
    scanf("%d", &m);
    int arr[n][m];
    printf("The array is [%d][%d] \n", n, m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Elements position at (%d,%d) : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Array %d x %d is : \n", n, m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    printf("array [%d][%d] to transpose array [%d][%d] : \n", n, m, m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", arr[j][i]);
        }
        printf("\n");
    }

    */

    //  sum of two array

    /*
     int i,j,a,s;

     printf("Enter a : ");
     scanf("%d",&a);

     printf("Enter s : ");
     scanf("%d",&s);
     // first array
     int arr[a][s];
     printf("\nFirst array is [%d][%d] \n",a,s);
     for (i=0;i<a;i++){
         for(j=0;j<s;j++){
             printf("elements position at (%d,%d) : ",i,j);
             scanf("%d",&arr[i][j]);
         }
     }
     printf("\nFirst array elements are [%d][%d] : \n",a,s);
      for (i=0;i<a;i++){
         for(j=0;j<s;j++){
             printf("%d\t",arr[i][j]);
         }
         printf("\n");
     }

     // second array
     int brr[a][s];
     printf("\nSecond array is [%d][%d] \n",a,s);
     for (i=0;i<a;i++){
         for(j=0;j<s;j++){
             printf("elements position at (%d,%d) : ",i,j);
             scanf("%d",&brr[i][j]);
         }
     }
     printf("\nSecond array elements are [%d][%d] : \n",a,s);
      for (i=0;i<a;i++){
         for(j=0;j<s;j++){
             printf("%d\t",brr[i][j]);
         }
         printf("\n");
     }

     // sum of two array
     int crr[a][s];
     printf("\n The sum of two array is : ");
     printf("First array arr[%d][%d] + brr[%d][%d] \n",a,s,a,s);
     for (i=0;i<a;i++){
         for(j=0;j<s;j++){
             crr[i][j] = arr[i][j] + brr[i][j];
         }
     }

      for (i=0;i<a;i++){
         for(j=0;j<s;j++){
             printf("%d\t",crr[i][j]);
         }
         printf("\n");
     }

 */

    // search array

    /*
     int i,n;
     printf("Enter value of n : ");
     scanf("%d",&n);
    int arr[n];
    printf("array [%d] elements are : \n");
     for(i=0;i<n;i++){
         printf("element %d ",i);
         scanf("%d",&arr[i]);
     }
     printf("\nArray [%d] elements are\n",n);
      for(i=0;i<n;i++){
         printf("%d\t",arr[i]);
        }

        printf("\n");

        int found=0,search;
        printf("what do you wanna search : ");
        scanf("%d",&search);

        for(i=0;i<n;i++){
            if (arr[i]==search){
               found=1;
               break;
            }
        }
        if (found){
            printf("element %d found in the array. \n",search);
        }
        else {
            printf("element %d not found in the array. \n",search);
        }
    */

    // sum of two array with found and search

    int i, j, n, m;

    printf("enter row : ");
    scanf("%d", &n);

    printf("enter colum : ");
    scanf("%d", &m);
    // first array
    int arr[n][m];
    printf("\nFirst array [%d][%d] elements are \n", n, m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Elements position at (%d,%d)", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // second array
    int brr[n][m];
    printf("\nSecond array [%d][%d] elements are \n", n, m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Elements position at (%d,%d)", i, j);
            scanf("%d", &brr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", brr[i][j]);
        }
        printf("\n");
    }

    printf("\nfirst array [%d][%d] + second array [%d][%d] \n", n, m, n, m);
    //  sum of two array
    int crr[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            crr[i][j] = arr[i][j] + brr[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", crr[i][j]);
        }
        printf("\n");
    }

    int found = 0, search;
    printf("What do you wanna search : ", search);
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (crr[i][j] == search)
            {
                found = 1;
                break;
            }
        }
    }

    if (found == 1)
    {
        printf("Your %d found in this sum array ", search);
    }
    else
    {
        printf("Your %d not found in this sum array ", search);
    }

    /*
    // find max number in the array
    int max = arr[0];

     for (i=0;i<n;i++){
         if (max<arr[i]){
             max = arr[i];
         }
     }


     // sum of all elements
       int sum=0;
     printf("\nSum of this array ");
     for (i=0;i<n;i++){
         sum += arr[i];
     }
    printf("%d",sum);


     */

    return 0;
}