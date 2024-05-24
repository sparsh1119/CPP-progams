#include<iostream>
using namespace std;

class Hero
{
private:
    int health;
public:
    char level;

int getHealth(){
    return health;
}
void setHealth(int h){
    health = h;
}

};

int main(){

    // //Static allocatioon 
    // Hero a;
    // a.setHealth(70);
    // a.level='A';
    // cout<<"Health is "<<a.getHealth()<<endl;
    // cout<<"Level is "<<a.level<<endl;



    // //dynamic allocation
    // Hero *b= new Hero;
    // b->setHealth(90);
    // b->level='B';
    // cout<<"Health is "<<(*b).getHealth()<<endl;
    // cout<<"Level is "<<(*b).level<<endl;

    // cout<<"Health is "<<b->getHealth()<<endl;
    // cout<<"Level is "<<b->level<<endl;



    // Hero joy;
    // //joy.health=70;
    // joy.setHealth(70);
    // joy.level='A';
    // cout<<"Size of Joy is "<<sizeof(joy)<<"\n";
    // cout<<"Health is "<<joy.getHealth()<<endl;
    // cout<<"Level is "<<joy.level<<endl;

}