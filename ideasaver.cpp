#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Get the name of the file to store ideas
    string filename;
    cout << "Enter a filename to store your ideas: ";
    cin >> filename;

    // Open the file
    ofstream outfile(filename.c_str());

    // Loop to get and store ideas
    string idea;
    cout << "Enter your ideas (type 'exit' to quit):\n";
    while (getline(cin, idea))
    {
        // Check if the user wants to exit
        if (idea == "exit")
            break;

        // Write the idea to the file
        outfile << idea << endl;
    }

    // Close the file
    outfile.close();

    cout << "Ideas saved to file '" << filename << "'.\n";

    return 0;
}
