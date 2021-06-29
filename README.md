# MDCore
## Lightweight web-framework
### C++ Example:

```cpp
// iostream for printf function
#include <iostream>

// MDCore C++ header
#include "mdcore.h"

// Namespace (not required)
using namespace MDCore;

int main() {
    // Defination
    Http http;

    // Adding route /test
    http.route("/test", [] (const char * query) -> const char * {
        printf("%s\n", query); // Output GET-query
        return "test"; // Return text "test" to client
    });

    http.listen(); // Start server, default port 8080
}
```
