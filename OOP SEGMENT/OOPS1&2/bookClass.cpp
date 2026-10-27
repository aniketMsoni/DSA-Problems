#include<iostream>
using namespace std;
class bookClass{
    public:
    int noOfPages;
    int price;
    string title;

    int countBooks(int p){
        if(price < p) return 1;
        else return 0;
    }
    bool isBookPresent(string t){
        return t == title;
    }
};

int main(){
    bookClass GOT;
    GOT.noOfPages = 450;
    GOT.title = "Game of Thrones";
    GOT.price = 750;
    int count = GOT.countBooks(1000);
    cout<<count<<" "<<GOT.isBookPresent("Harry Potter");
    return 0;
}