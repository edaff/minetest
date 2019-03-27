#ifndef WASM_BASE_H_
#define WASM_BASE_H_

class WasmModApiBase {
public:
	static bool registerFunction(const char* name);

	static Server* getServer();
};

#endif /* WASM_BASE_H_ */
