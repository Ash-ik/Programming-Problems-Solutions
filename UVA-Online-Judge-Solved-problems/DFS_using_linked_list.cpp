#include<iostream>
#include <list>
using namespace std;

class Graph
{
    int vertices;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[]);  // A function used by DFS
public:
    Graph();   // Constructor
    void addEdge(int v, int w);   // function to add an edge to graph
    void DFS();    // prints DFS traversal of the complete graph
};

Graph::Graph()
{

    //creates a graph with 'choice' number vertices
    int choice;
    cout<<"Enter the number of vertices of the given tree:";
    cin>>choice;
    this->vertices=choice;

    //creates a list with 'vertices' number of element
    adj=new list<int>[vertices];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    cout << v << " ";

    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);
}

// The function to do DFS traversal. It uses recursive DFSUtil()
void Graph::DFS()
{

    int n;
    cout<<"Enter a vertex to Depth First Search the tree from it:";
    cin>>n;
    cout << "Following is Depth First Traversal (starting from vertex "<<n<<endl;


    // Mark all the vertices as not visited
    bool *visited = new bool[v];
    for(int i = 0; i < v; i++)
        visited[i] = false;

    // Call the recursive helper function to print DFS traversal
    // starting from all vertices one by one
    for(int i = 0; i < v; i++)
        if(visited[i] == false)
            DFSUtil(i, visited);
}

int main()
{
    Graph g;
    int number1,number2;
    cout<<"Enter two 0(zero) to stop connecting vertices\n\n";

    while(cout<<"Enter two edge to connect:" && cin>>number1>>number2 &&(number1+number2))
    g.addEdge(number1,number2);

    g.DFS();

    return 0;
}
