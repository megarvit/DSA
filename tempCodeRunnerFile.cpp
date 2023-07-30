int main(){

    char ch='a';

    cout<<endl;
    switch ( ch )
    {
    case 1:
        cout<<"First"<<endl;
        break;

    case '1': cout<<"character one"<<endl;
        break;
    
    default: cout<<"it is a default case"<<endl;
    }
    cout<<endl;

    return 0;
}