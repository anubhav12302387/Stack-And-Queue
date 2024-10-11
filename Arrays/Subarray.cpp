 #include<iostream>
 using namespace std;
 int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Input arrays: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    //logic
    for(int i=0;i<size;i++){
        printf("Subarrays are: ");
        for(int j=i + 1;j < size;j++){
            printf("(%d,%d)", arr[i],arr[j]);
        }
        printf("\n");
    }
    return 0;
 }