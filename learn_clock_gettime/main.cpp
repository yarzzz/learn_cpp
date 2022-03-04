#include <iostream>  
 
using namespace std;
void clocktime()
{
struct timespec tn;
 
cout<<"----";
clock_gettime(CLOCK_REALTIME, &tn);
 
std::cout<<"10e9 纳秒级s ----:";
std::cout<<tn.tv_sec<<"s,"<<tn.tv_nsec<<"纳秒"<<endl;
 
}
int main( ){     
	clocktime();
	return 0;
}