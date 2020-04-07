//Core. Alpha version.

//C++ Libs.
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <random>
#include <cstdlib>
#include <limits>
#include <math.h>
#include <ctime>

//C++11.
#include <thread>
#include <chrono>

//glm.
#include <glm/glm.hpp>
#include <glm/gtc/bitfield.hpp>
#include <glm/gtc/color_space.hpp>
#include <glm/gtc/constants.hpp>
#include <glm/gtc/epsilon.hpp>
#include <glm/gtc/integer.hpp>
#include <glm/gtc/matrix_access.hpp>
#include <glm/gtc/matrix_integer.hpp>
#include <glm/gtc/matrix_inverse.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/noise.hpp>
#include <glm/gtc/random.hpp>


//Namespaces.
using namespace std;
using namespace this_thread;
using namespace chrono;




//Object Comparison. WIP
//template <typename T> void function(const T& object)



//Creates a loop.
#define fastLoop(VALUE) for(int i = 0; i < (VALUE); i++)

//Terminal.
#define input(TEXT, VAR) cout << (TEXT); getline(cin, VAR)
#define print(TEXT) cout << (TEXT) << endl


//Threading.
#define vt(TYPE) vecT.emplace_back(TYPE)
vector<thread> vecT;

void jvt() {

	for (auto &t : vecT)
	t.join();
}


/*
void thread1(){
	cout << "Hello" << endl;
}
int main(){
thread t1(thread1);

t1.join();
}
*/

//Time. Must be in a thread.
#define sec(TIME) sleep_for(seconds(TIME))
#define msec(TIME) sleep_for(milliseconds(TIME))


//DataConversion.
#define str(NUMBER) to_string(NUMBER)
#define num(TEXT) stoi(TEXT)


//Random Number Generator.
#define randomEngine default_random_engine RNG(time(NULL))
#define random uniform_int_distribution<int>
#define randF uniform_real_distribution<float>








