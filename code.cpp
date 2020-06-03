#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    private:
    int len,wid;
    public:
    void set(int c,int d)
    {
        len=c;
        wid=d;
    }
    void display()
    {
        cout<<len<<" "<<wid;
    }
};
class RectangleArea:public Rectangle{
    public:
    int a,b;
    void read_input()
    {
        cin>>a>>b;
         set(a,b);
    }
    void display(int c=0)
    {
        cout<<"\n"<<a*b;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
