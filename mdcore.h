#pragma once

// MayerDev Core
// Header-file for C++
// Author: mayer.dev@yahoo.com
// 
// MayerDev 2018-2021, All rights reserved

#ifndef MDCORE_H
#define MDCORE_H

// DLL-import define
#define IMPORT __declspec(dllimport)

// Use .lib file
#pragma comment(lib, "mdcore.lib")

// Creating namespace MDCore
namespace MDCore {
	// Type definations
	typedef const char * (*cb) (const char * query);

	// Class Http contains all functions for working with http
	class Http {
	public:
		// Start HTTP server
		// Default ip: 0.0.0.0
		// Default port: 8080
		IMPORT void listen(const char * ip = "0.0.0.0", int port = 8080);

		// Add route, use before listen
		IMPORT void route(const char * name, cb callback);

		// Content-type: application/json
		IMPORT void set_json(const char * name);

		// Content-type: application/xml
		IMPORT void set_xml(const char * name);

		// Enable Cross-Origin Resource Sharing (CORS)
		// Default:
		// Access-Control-Allow-Origin: *
		// Access-Control-Allow-Headers: Origin, X-Requested-With, Content-Type, Accept
		IMPORT void set_cors(const char * name,
							 const char * origin = "*",
							 const char * headers = "Origin, X-Requested-With, Content-Type, Accept");
	};
}

#endif
