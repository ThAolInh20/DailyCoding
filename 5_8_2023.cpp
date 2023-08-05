#include<iostream>
#include<vector>
#include <stdexcept>
/*You run an e-commerce website and want to record the last N order ids in a log. Implement a data structure to accomplish this, with the following API:

record(order_id): adds the order_id to the log
get_last(i): gets the ith last element from the log. i is guaranteed to be smaller than or equal to N.
You should be as efficient with time and space as possible.*/
class order{
	private:
		std::vector<int> log;
		int index;
	public :
		order(int N){
			log.resize(N, 0);
			index=0;
		}
		void record(int order_id){
			log[index]=order_id;
			index=(index+1)%log.size();
		}
		int get_last(int vt){
			if(vt<1||vt>log.size()){
				throw std::out_of_range("Invalid index");
			}
			int index2=(index-vt+log.size())%log.size();
			return log[index2];
		}	
};
int main() {
    order log(5);

    log.record(1001);
    log.record(1002);
    log.record(1003);

    std::cout << log.get_last(1) << std::endl;  // Output: 1003
    std::cout << log.get_last(2) << std::endl;  // Output: 1002
    std::cout << log.get_last(3) << std::endl;  // Output: 1001

    return 0;
}
