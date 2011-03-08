#ifndef BT_OS_LOADER
#define BT_OS_LOADER

#include <string>
#include <vector>

using namespace std;

class Memory;
class Pcb;

typedef vector<Pcb*> PcbList;

/**
 * Loader functions to load jobs and data into the 
 * simulated "Disk" memory. 
 */
class Loader 
{
	public:
		/**
		 * CTOR: Filename unspec'd.
		 */
		Loader()
			: filename("") {};

		/**
		 * CTOR: Set filename.
		 */
		Loader(string fname) 
			: filename(fname) {};

		// TODO: I don't like the semantics of this class anymore.
		PcbList* loadDisk(Memory* mem);

	private:
		// Name of file with instructions.
		string filename;
};

#endif
