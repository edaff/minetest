#include "wasm_api/wasm_server.h"

// chat_send_all(text)
int WasmModApiServer::wasm_chat_send_all(const char *text) {
	NO_MAP_LOCK_REQUIRED;

	// Get server
	Server *server = getServer();

	// Send
	server->notifyPlayers(utf8_to_wide(text));
}
