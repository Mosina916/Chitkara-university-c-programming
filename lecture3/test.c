// #include<stdio.h>
// #include<string.h>
// int main(){
//    char a[100],b[100];
//    int i;
//    scanf("%s",a);

   


//    scanf("%s",b);
//    int freq[26]={0};
//     if(strlen(a)!=strlen(b)){
//        printf("The two strings are not permutations of each other\n");
//        return 0;
       
//    }
//    for (int i = 0; i <strlen(a); i++)
//    {
//        int x=a[i]-'a';
//        freq[x]++;
//        /* code */
//    }
  
//    for (int i = 0; i <strlen(b); i++)
//    {
//        int x=b[i]-'a';
//        freq[x]--;
//        /* code */
//    }
//    for (int i = 0; i <26; i++)
//    {
//        if(freq[i]!=0){
//            printf("The two strings are not permutations of each other\n");
//         return 0;
//        }
//        /* code */
//    }
//    printf("The two strings are permutations of each other\n");
        
   
   
   



//    int n;
//    scanf("%d ",&n);
// //    scanf("%s",ch);
//     gets(ch);
//     int x=strlen(ch);
// //    printf("%lu",strlen(ch));
//    for (int i = strlen(ch)-1; i>=0; i--)
//    {
//        ch[i+n]=ch[i];
//        /* code */
//    }
//    printf("%lu",strlen(ch));

//    for (int i =0; i<strlen(ch); i++)
//    {
//       printf("%c",ch[i]);
//        /* code */
//    }
//    printf("\n");
//    int j=0;
//    for (int i = x; i <strlen(ch) ; i++)
//    {
//        ch[j]=ch[i];
//        j++;
//        /* code */
//    }
//    ch[x]='\0';

//    printf("\n%s",ch);
   
   
   


//     return 0;
// }

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    // char arr[1000];
    // scanf("%s",arr);
    // int n=strlen(arr);
    // printf("length is : %d\n",n);
    // printf("string is : %s\n",arr);

    // for (int i = 0; i <= n-1; i++)
    // {
    //     for (int j = i; j <=n-1; j++)
    //     {

            
    //         for (int k = i; k <=j;k++)
    //         {
    //             printf("%c ",arr[k]);

            
               
    //         }
          


    //         printf("\n");
            
            
    //     }
        
        
    // }
    int k;
    char arr[100];
    scanf("%d",&k);
    scanf("%s",arr);
    int freq[26]={0};
    int s=0;
    int dis=0;
    int maxlength=INT_MIN;
    for (int i = 0; i < strlen(arr); i++)
    {
        int index=arr[i]-'a';
        if(freq[index]==0){
            dis++;
        }
        freq[index]++;
        while(dis>k){
            int newindex=arr[s]-'a';
            freq[newindex]--;
            if(freq[newindex]==0){
                dis--;
            }
            s++;


        }
        maxlength=fmax(maxlength,i-s+1);


        /* code */
    }
    if(maxlength<k){
        printf("-1 \n");
    }
    else{
        printf("%d",maxlength);
    }
    


  
    return 0;
}