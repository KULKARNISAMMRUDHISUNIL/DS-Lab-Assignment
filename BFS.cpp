#include <iostream>
#include <queue>  // To use queue in BFS
using namespace std;

class WebCrawler {
    int pages;                // Number of web pages
    int links[10][10];        // Adjacency matrix (edges)
    int visited[10];          // Keep track of visited pages

public:
    // Function to read the web graph (pages and links)
    void readWeb() {
        int connections;
        cout << "\nEnter number of web pages: ";
        cin >> pages;

        // Initialize matrix and visited array to 0
        for (int i = 1; i <= pages; i++) {
            for (int j = 1; j <= pages; j++) {
                links[i][j] = 0;
            }
            visited[i] = 0;
        }

        cout << "Enter number of hyperlinks between pages: ";
        cin >> connections;

        cout << "Enter hyperlinks (from page to page):\n";
        for (int k = 0; k < connections; k++) {
            int u, v;
            cin >> u >> v;
            links[u][v] = 1;
            links[v][u] = 1; // Assuming links are two-way for this example
        }
    }

    // BFS function to simulate crawling
    void crawlBFS(int start) {
        queue<int> q;          // Queue for BFS
        visited[start] = 1;    // Mark the starting page as visited
        q.push(start);         // Add starting page to the queue

        cout << "\nBFS-based Web Crawling Start..." << endl;

        while (!q.empty()) {
            int current = q.front(); // Get front page from queue
            q.pop();                 // Remove it from queue

            cout << "Indexed Page " << current << endl;

            // Explore all linked pages of the current page
            for (int i = 1; i <= pages; i++) {
                // If there is a link and the page is not visited
                if (links[current][i] == 1 && visited[i] == 0) {
                    visited[i] = 1;  // Mark as visited
                    q.push(i);       // Add page to queue
                }
            }
        }

        cout << "\nAll reachable web pages have been indexed!" << endl;
    }

    // Function to start BFS crawling
    void startCrawling() {
        int start;
        cout << "\nEnter the starting web page number: ";
        cin >> start;
        crawlBFS(start);
    }
};

int main() {
    cout << "Name: Sammrudhi Kulkarni   PRN: B24CE1125" << endl;

    WebCrawler w;
    w.readWeb();
    w.startCrawling();

    return 0;
}
