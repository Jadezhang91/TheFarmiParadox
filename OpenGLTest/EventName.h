#pragma once

// Enumerated type used for indexing and referencing events
enum EventName {
    EVENT_EXAMPLE, // Example event type for demonstration purposes
	RENDERER_ADD_TO_RENDERABLES,
    RENDERER_ADD_TO_UIRENDERABLES, // Tell renderer to add renderable to list
    RENDERER_POPULATE_BUFFERS, // Tell renderer to repopulate buffers for a renderable
	PLAYER_JUMP,   // Used to trigger a player movement event
	PLAYER_LEFT,
	PLAYER_RIGHT,
	WEAPON_PREV,
	WEAPON_NEXT,
	WEAPON_FIRE
};
