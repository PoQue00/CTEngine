# TDEngine — Tool Checklists

## Current Phase 1/30

## Progress

<img src="./progress.svg" alt="Project progress: 3.9%" width="19.5">

## Architecture
- **Runtime:** C++ , Lua, Raylib
- **Editors/Tools:** Qt, MSYS
- **Maps:** Created in Qt Map Editor → exported to Lua → loaded by C++ runtime
- **Game content:** Towers, enemies, projectiles, abilities, waves, etc. can be defined as Lua data/scripts

---

# 1. Overall Tool Checklist

## Core development tools

- [ ] Map Editor
- [ ] Tower Editor
- [ ] Enemy Editor
- [ ] Projectile Editor
- [ ] Ability Editor
- [ ] Wave Editor
- [ ] Animation Editor
- [ ] Asset Manager
- [ ] Game/Project Editor
- [ ] Engine Debugger
- [ ] Lua Script Editor
- [ ] Audio Tool

## Later / optional

- [ ] Particle Editor
- [ ] Visual Effects Editor
- [ ] Upgrade-tree Editor
- [ ] Localization Editor
- [ ] Dialogue Editor
- [ ] Save-game Editor/Debugger
- [ ] Mod/Package Builder
- [ ] Asset Importer/Converter
- [ ] Build/Package Tool

---

# 2. Map Editor

## Basic map functionality

- [ ] New map
- [ ] Open map
- [ ] Save map
- [ ] Save As
- [ ] Undo/redo
- [ ] Zoom
- [ ] Pan
- [ ] Grid
- [ ] Snap to grid
- [ ] Map dimensions
- [ ] Map background

## Path system

- [ ] Create path
- [ ] Add waypoint
- [ ] Move waypoint
- [ ] Delete waypoint
- [ ] Multiple paths
- [ ] Path branches
- [ ] Path merging
- [ ] Set enemy spawn
- [ ] Set enemy exit
- [ ] Path preview

## Tower placement

- [ ] Create tower placement area
- [ ] Define where towers can be placed
- [ ] Define blocked areas
- [ ] Water/terrain
- [ ] Height/elevation if required
- [ ] Tower radius/placement collision

## Map objects

- [ ] Decorations
- [ ] Obstacles
- [ ] Buildings
- [ ] Trees
- [ ] Rocks
- [ ] Interactive objects
- [ ] Custom map objects

## Editor UI

- [ ] Object selection
- [ ] Properties panel
- [ ] Layers
- [ ] Object list
- [ ] Asset browser
- [ ] Map preview

## Lua

- [ ] Lua export
- [ ] Lua import
- [ ] Validate map data
- [ ] Detect invalid paths
- [ ] Detect missing assets

---

# 3. Tower Editor

## Basic information

- [ ] Tower ID
- [ ] Tower name
- [ ] Description
- [ ] Icon
- [ ] Sprite
- [ ] Animations

## Economy

- [ ] Purchase cost
- [ ] Sell value
- [ ] Upgrade cost
- [ ] Refund percentage

## Combat

- [ ] Attack range
- [ ] Attack cooldown
- [ ] Damage
- [ ] Pierce
- [ ] Damage type
- [ ] Targeting type

## Targeting

- [ ] First
- [ ] Last
- [ ] Closest
- [ ] Strongest
- [ ] Weakest
- [ ] Random
- [ ] Custom Lua targeting

## Projectile

- [ ] Projectile type
- [ ] Projectile sprite
- [ ] Speed
- [ ] Lifetime
- [ ] Pierce
- [ ] Damage
- [ ] Explosion
- [ ] Homing
- [ ] Effects

## Upgrades

- [ ] Upgrade levels
- [ ] Upgrade cost
- [ ] Stat changes
- [ ] New attacks
- [ ] New abilities
- [ ] Sprite changes
- [ ] Upgrade descriptions

## Abilities

- [ ] Ability selection
- [ ] Cooldown
- [ ] Duration
- [ ] Targeting
- [ ] Effect
- [ ] Animation
- [ ] Sound

## Lua

- [ ] Export tower
- [ ] Import tower
- [ ] Validate tower
- [ ] Preview generated Lua

---

# 4. Enemy Editor

## Basic information

- [ ] Enemy ID
- [ ] Name
- [ ] Description
- [ ] Sprite
- [ ] Icon
- [ ] Animation

## Statistics

- [ ] Health
- [ ] Speed
- [ ] Size
- [ ] Damage/lives lost
- [ ] Cash reward
- [ ] XP reward

## Properties

- [ ] Flying
- [ ] Armoured
- [ ] Invisible/camouflaged
- [ ] Regeneration
- [ ] Shield
- [ ] Immunities
- [ ] Resistances
- [ ] Custom properties

## Behaviour

- [ ] Normal pathing
- [ ] Flying pathing
- [ ] Splitting
- [ ] Regeneration
- [ ] Teleporting
- [ ] Boss behaviour
- [ ] Custom Lua behaviour

## Children

- [ ] Child enemy
- [ ] Child count
- [ ] Spawn delay
- [ ] Spawn location
- [ ] Recursive children

## Lua

- [ ] Export enemy
- [ ] Import enemy
- [ ] Validate enemy
- [ ] Preview Lua

---

# 5. Projectile Editor

## Basic

- [ ] Projectile ID
- [ ] Sprite
- [ ] Animation
- [ ] Size
- [ ] Lifetime

## Movement

- [ ] Speed
- [ ] Direction
- [ ] Homing
- [ ] Tracking
- [ ] Turning speed

## Damage

- [ ] Damage
- [ ] Pierce
- [ ] Damage type
- [ ] Critical hits
- [ ] Damage modifiers

## Effects

- [ ] Explosion
- [ ] Splash damage
- [ ] Slow
- [ ] Stun
- [ ] Burn
- [ ] Knockback
- [ ] Custom Lua effect

---

# 6. Ability Editor

## Basic

- [ ] Ability ID
- [ ] Name
- [ ] Description
- [ ] Icon

## Timing

- [ ] Cooldown
- [ ] Duration
- [ ] Activation delay
- [ ] Ability charges

## Targeting

- [ ] Self
- [ ] Tower
- [ ] Enemy
- [ ] Area
- [ ] Global
- [ ] Custom Lua targeting

## Effects

- [ ] Damage
- [ ] Buff
- [ ] Debuff
- [ ] Slow
- [ ] Stun
- [ ] Money
- [ ] Spawn enemies
- [ ] Spawn projectiles
- [ ] Custom Lua behaviour

---

# 7. Wave Editor

## Wave

- [ ] Wave number
- [ ] Wave name
- [ ] Start delay
- [ ] End condition
- [ ] Difficulty

## Enemy groups

- [ ] Select enemy
- [ ] Quantity
- [ ] Spawn delay
- [ ] Spawn interval
- [ ] Spawn path
- [ ] Group ordering

## Advanced

- [ ] Multiple spawn points
- [ ] Random enemies
- [ ] Conditional waves
- [ ] Boss waves
- [ ] Custom Lua wave logic

---

# 8. Animation Editor

- [ ] Import spritesheet
- [ ] Sprite-sheet slicing
- [ ] Individual frames
- [ ] FPS
- [ ] Frame duration
- [ ] Looping
- [ ] Ping-pong
- [ ] Animation states
- [ ] Preview
- [ ] Export animation definition

## Animation states

- [ ] Idle
- [ ] Attack
- [ ] Hit
- [ ] Death
- [ ] Ability

---

# 9. Asset Manager

## Asset types

- [ ] Images
- [ ] Spritesheets
- [ ] Animations
- [ ] Sounds
- [ ] Music
- [ ] Maps
- [ ] Towers
- [ ] Enemies
- [ ] Projectiles
- [ ] Abilities
- [ ] Lua scripts

## Features

- [ ] Search
- [ ] Filtering
- [ ] Preview
- [ ] Import
- [ ] Delete
- [ ] Rename
- [ ] Move
- [ ] Dependency checking
- [ ] Missing asset detection

---

# 10. Engine Debugger

## Rendering

- [ ] FPS
- [ ] Frame time
- [ ] Draw calls
- [ ] Vertices
- [ ] Texture count
- [ ] Batches

## Game

- [ ] Enemy count
- [ ] Tower count
- [ ] Projectile count
- [ ] Current wave
- [ ] Money
- [ ] Lives

## Lua

- [ ] Script errors
- [ ] Script execution time
- [ ] Loaded scripts
- [ ] Lua stack/debug information

## Objects

- [ ] Select entity
- [ ] Inspect properties
- [ ] Modify properties
- [ ] Delete entity
- [ ] Spawn entity

---

# 11. Lua Editor

- [ ] Syntax highlighting
- [ ] Error highlighting
- [ ] Autocomplete
- [ ] Documentation hints
- [ ] Run script
- [ ] Reload script
- [ ] Lua console
- [ ] Error log
- [ ] Script debugger

---

# TDEngine - Development Checklist

> C++ + Qt + Lua + Raylib
>
> Goal: Build a specialised 2D tower-defense engine inspired by games such as BTD, with Qt-based development tools and a C++/Lua/Raylib.

---

# Project Overview

## Technology Stack

- [x] C++
- [x] Qt
- [ ] Lua
- [x] Raylib
- [x] CMake
- [x] Git / GitHub

## Architecture

- [x] Qt handles development tools and editors
- [x] C++ handles the game engine/runtime
- [ ] Lua handles game data and scripting
- [x] Raylib 
- [ ] handles rendering
- [ ] Editors export data the runtime can consume
- [ ] Runtime remains independent from editor UI
- [ ] Keep renderer compatible with older hardware

## Main Pipeline

    Qt Editor
        |
        v
    Lua/Data Files
        |
        v
    C++ Engine
        |
        v
    Raylib
        |
        v
    Game

---

# Phase 0 — Project Setup

## Repository

- [x] Create GitHub repository
- [x] Choose project name
- [ ] Create README
- [x] Create LICENSE
- [x] Create .gitignore
- [x] Make initial commit
- [x] Push project to GitHub

## Qt / C++

- [x] Create Qt/C++ project
- [x] Configure CMake
- [x] Configure Debug build
- [ ] Configure Release build
- [x] Confirm project compiles
- [x] Confirm project runs

## Folder Structure

    TD-Engine/
    |
    +-- CMakeLists.txt
    +-- README.md
    +-- LICENSE
    +-- .gitignore
    |
    +-- engine/
    |   +-- core/
    |   +-- rendering/
    |   +-- audio/
    |   +-- scripting/
    |   +-- assets/
    |   +-- game/
    |
    +-- game/
    |   +-- towers/
    |   +-- enemies/
    |   +-- projectiles/
    |   +-- waves/
    |   +-- maps/
    |
    +-- tools/
    |   +-- MapEditor/
    |   +-- TowerEditor/
    |   +-- EnemyEditor/
    |   +-- WaveEditor/
    |
    +-- assets/
    |
    +-- scripts/

- [x] Create engine/
- [x] Create engine/core/
- [x] Create engine/rendering/
- [x] Create engine/audio/
- [x] Create engine/scripting/
- [x] Create engine/assets/
- [x] Create engine/game/
- [x] Create game/
- [x] Create game/towers/
- [x] Create game/enemies/
- [x] Create game/projectiles/
- [x] Create game/waves/
- [x] Create game/maps/
- [x] Create tools/
- [x] Create tools/MapEditor/
- [x] Create tools/TowerEditor/
- [x] Create tools/EnemyEditor/
- [x] Create assets/
- [x] Create scripts/

## Git

- [x] First successful build committed
- [x] Push to GitHub
- [x] Verify clean clone builds
- [x] Commit regularly
- [x] Keep build files out of repository

---

# Phase 1 — Basic Application

## Qt Application

- [x] Create Qt application
- [x] Create main window
- [x] Create game widget
- [x] Make application start
- [x] Make application close correctly
- [x] Add logging
- [x] Add debug output

## Engine Classes

Create:

- [x] Engine
- [ ] Game
- [x] Renderer

## Connections

- [x] Qt Application creates Engine
- [x] Engine creates Game
- [ ] Engine creates Renderer
- [ ] Game can access required engine systems
- [x] Renderer can render

## Target Structure

    Qt Application
          |
          v
        Engine
          |
          +---- Game
          |
          +---- Renderer

## Milestone

- [x] Qt application launches
- [x] Engine initialises
- [ ] Game initialises
- [x] Renderer initialises
- [ ] Application closes cleanly

---

# Phase 2 — Game Loop

## Game Loop

- [ ] Create update loop
- [ ] Create render loop
- [ ] Calculate elapsed time
- [ ] Calculate delta time
- [ ] Pass delta time into game update
- [ ] Call render
- [ ] Test different frame rates

## Timing

- [ ] Display FPS
- [ ] Display frame time
- [ ] Test high FPS
- [ ] Test low FPS
- [ ] Test variable FPS
- [ ] Make movement delta-time based
- [ ] Make timers delta-time based

## Basic Loop

    Game Loop
        |
        +-- Calculate Delta Time
        |
        +-- Update Game
        |
        +-- Render
        |
        +-- Repeat

## Milestone

- [ ] Game updates correctly
- [ ] FPS counter works
- [ ] Frame time counter works
- [ ] Game behaviour does not depend on FPS

---

# Phase 3 — Raylib Renderer

## Raylib Context

- [ ] Create Raylib context
- [ ] Request Raylib compatible context
- [ ] Verify Raylib version
- [ ] Print GPU information
- [ ] Print renderer information
- [ ] Print vendor information
- [ ] Print supported extensions if useful

## Basic Rendering

- [ ] Clear screen
- [ ] Set viewport
- [ ] Create orthographic projection
- [ ] Render triangle
- [ ] Render quad
- [ ] Create 2D coordinate system

## Textures

- [ ] Create texture loader
- [ ] Load PNG
- [ ] Upload texture to Raylib
- [ ] Render textured quad
- [ ] Set texture filtering
- [ ] Set texture wrapping
- [ ] Handle texture dimensions

## Sprites

- [ ] Create Sprite class
- [ ] Set position
- [ ] Set scale
- [ ] Set rotation
- [ ] Set origin/pivot
- [ ] Set opacity
- [ ] Render sprite region

## Alpha

- [ ] Enable alpha blending
- [ ] Configure blending
- [ ] Test transparent textures
- [ ] Test semi-transparent textures

## Camera

- [ ] Create Camera class
- [ ] Camera position
- [ ] Camera zoom
- [ ] Camera movement
- [ ] Camera boundaries
- [ ] World-to-screen conversion
- [ ] Screen-to-world conversion

## Batching

- [ ] Create sprite batching system
- [ ] Reduce texture changes
- [ ] Measure draw calls
- [ ] Measure sprite count

## Milestone

- [ ] Raylib context works
- [ ] Textured sprite renders
- [ ] Sprite can move
- [ ] Camera works
- [ ] Transparency works
- [ ] Multiple sprites render

---

# Phase 4 — Asset System

## Asset Manager

- [ ] Create AssetManager
- [ ] Load textures
- [ ] Cache textures
- [ ] Prevent duplicate loading
- [ ] Unload assets
- [ ] Handle missing assets
- [ ] Handle invalid files
- [ ] Handle asset paths

## Texture Metadata

- [ ] Width
- [ ] Height
- [ ] Format
- [ ] Raylib texture ID
- [ ] File path
- [ ] Asset ID

## Spritesheets

- [ ] Load spritesheet
- [ ] Define sprite regions
- [ ] Load individual sprite region
- [ ] Store region metadata

## Asset IDs

Use IDs instead of hardcoded paths everywhere.

Examples:

- tower.dart
- tower.sniper
- tower.boost
- enemy.basic
- enemy.fast
- enemy.boss
- projectile.dart
- projectile.bomb
- map.example

- [ ] Create asset ID system
- [ ] Map IDs to files
- [ ] Validate IDs
- [ ] Detect duplicate IDs
- [ ] Detect missing files

## Milestone

- [ ] Engine can request asset by ID
- [ ] Asset loads once
- [ ] Asset is cached
- [ ] Renderer can use asset

---

# Phase 5 — Basic Lua Integration

## Lua Setup

- [ ] Add Lua to CMake
- [ ] Create Lua state
- [ ] Initialise Lua
- [ ] Shut down Lua correctly
- [ ] Load .lua file
- [ ] Execute Lua file
- [ ] Handle Lua errors

## Lua Data Types

Learn to read:

- [ ] Strings
- [ ] Numbers
- [ ] Booleans
- [ ] Tables
- [ ] Arrays
- [ ] Nested tables

## Test Lua

    return {
        name = "Test",
        health = 100,
        speed = 2
    }

## C++ Side

- [ ] Load Lua file
- [ ] Execute file
- [ ] Read returned table
- [ ] Read name
- [ ] Read health
- [ ] Read speed
- [ ] Convert Lua data to C++ structures

## Error Handling

- [ ] Missing file
- [ ] Invalid syntax
- [ ] Missing field
- [ ] Wrong field type
- [ ] Runtime error
- [ ] Error line number

## Milestone

    Lua File
        |
        v
    Lua Runtime
        |
        v
        C++
        |
        v
    C++ Data Structure

- [ ] Lua file loads
- [ ] Data reaches C++
- [ ] C++ can use Lua data

---

# Phase 6 — Map Data Format

Define the map format before building the complete Map Editor.

## Map Properties

- [ ] Map ID
- [ ] Map name
- [ ] Width
- [ ] Height
- [ ] Background
- [ ] Paths
- [ ] Spawn points
- [ ] Exit points
- [ ] Tower placement areas
- [ ] Blocked areas
- [ ] Decorations
- [ ] Objects

## Paths

- [ ] Path ID
- [ ] Waypoints
- [ ] Multiple paths
- [ ] Branches
- [ ] Merging paths
- [ ] Spawn point
- [ ] Exit point

## Example

    return {
        id = "map.test",
        name = "Test Map",

        width = 1280,
        height = 720,

        background = "map.test.background",

        paths = {
            {
                id = "main",

                waypoints = {
                    { x = 100, y = 300 },
                    { x = 300, y = 300 },
                    { x = 500, y = 400 },
                    { x = 800, y = 400 }
                }
            }
        },

        spawn = {
            x = 50,
            y = 300
        },

        exit = {
            x = 900,
            y = 400
        }
    }

## C++ Classes

- [ ] Create Map
- [ ] Create Path
- [ ] Create Waypoint
- [ ] Create SpawnPoint
- [ ] Create ExitPoint
- [ ] Create MapLoader
- [ ] Load map Lua
- [ ] Parse map
- [ ] Validate map

## Milestone

- [ ] test_map.lua loads
- [ ] C++ creates Map
- [ ] Paths exist
- [ ] Waypoints exist
- [ ] Spawn exists
- [ ] Exit exists

---

# Phase 7 — Render Map

## Background

- [ ] Render background
- [ ] Support background texture
- [ ] Support map dimensions

## Paths

- [ ] Render path
- [ ] Render waypoints
- [ ] Render path connections

## Spawn / Exit

- [ ] Render spawn point
- [ ] Render exit point

## Placement

- [ ] Render tower placement areas
- [ ] Render blocked areas
- [ ] Render map boundaries

## Camera

- [ ] Camera movement
- [ ] Camera zoom
- [ ] Camera boundaries
- [ ] Map centering

## Milestone

    map.lua
       |
       v
    C++ MapLoader
       |
       v
    C++ Map
       |
       v
    Raylib Renderer
       |
       v
    Visible Map

- [ ] Complete pipeline works
- [ ] Map can be viewed in game

---

# Phase 8 — Map Editor

## Qt Project

- [ ] Create Map Editor project
- [ ] Create main editor window
- [ ] Create map viewport
- [ ] Create toolbar
- [ ] Create menu
- [ ] Create properties panel
- [ ] Create asset panel

## Map Creation

- [ ] New map
- [ ] Open map
- [ ] Save map
- [ ] Save As
- [ ] Map name
- [ ] Map ID
- [ ] Map dimensions
- [ ] Background selection

## Grid

- [ ] Grid display
- [ ] Grid size
- [ ] Toggle grid
- [ ] Snap to grid

## Camera

- [ ] Zoom
- [ ] Pan
- [ ] Reset camera
- [ ] Fit map to window

## Paths

- [ ] Create path
- [ ] Select path
- [ ] Add waypoint
- [ ] Move waypoint
- [ ] Delete waypoint
- [ ] Connect waypoints
- [ ] Multiple paths
- [ ] Branches
- [ ] Merging paths
- [ ] Path names

## Spawn / Exit

- [ ] Add spawn point
- [ ] Move spawn point
- [ ] Delete spawn point
- [ ] Add exit
- [ ] Move exit
- [ ] Delete exit

## Tower Placement

- [ ] Create placement area
- [ ] Move placement area
- [ ] Resize placement area
- [ ] Delete placement area
- [ ] Create blocked area
- [ ] Move blocked area
- [ ] Resize blocked area
- [ ] Delete blocked area

## Objects

- [ ] Add decoration
- [ ] Add obstacle
- [ ] Add building
- [ ] Add tree
- [ ] Add rock
- [ ] Add custom object
- [ ] Move object
- [ ] Rotate object
- [ ] Delete object

## Selection

- [ ] Click object
- [ ] Select object
- [ ] Multi-selection
- [ ] Move selected objects
- [ ] Delete selected objects
- [ ] Duplicate objects
- [ ] Object properties
- [ ] Object list

## Layers

- [ ] Background layer
- [ ] Path layer
- [ ] Placement layer
- [ ] Object layer
- [ ] Decoration layer
- [ ] Toggle layer visibility

## Undo / Redo

- [ ] Undo
- [ ] Redo
- [ ] Undo object creation
- [ ] Undo object deletion
- [ ] Undo movement
- [ ] Undo property changes

## Lua

- [ ] Export Lua
- [ ] Import Lua
- [ ] Validate Lua
- [ ] Detect invalid paths
- [ ] Detect missing assets
- [ ] Detect invalid objects
- [ ] Preview generated Lua

## Major Milestone

    Qt Map Editor
          |
          v
       map.lua
          |
          v
      C++ Engine
          |
          v
     Raylib Renderer
          |
          v
       Same Map

- [ ] Editor can create map
- [ ] Editor can save map
- [ ] Runtime can load map
- [ ] Runtime renders same map

---

# Phase 9 — Enemy System

## Enemy Class

Create:

- [ ] Enemy
- [ ] Position
- [ ] Health
- [ ] Maximum health
- [ ] Speed
- [ ] Size
- [ ] Path
- [ ] Current waypoint
- [ ] Reward
- [ ] State

## Movement

- [ ] Spawn enemy
- [ ] Follow path
- [ ] Move toward waypoint
- [ ] Detect waypoint reached
- [ ] Move to next waypoint
- [ ] Detect path completion
- [ ] Reach exit
- [ ] Remove enemy

## Lifecycle

- [ ] Spawn
- [ ] Update
- [ ] Take damage
- [ ] Die
- [ ] Remove
- [ ] Reach exit

## Player Interaction

- [ ] Lose life
- [ ] Give reward
- [ ] Death event

## Milestone

- [ ] Enemy spawns
- [ ] Enemy follows path
- [ ] Enemy reaches exit
- [ ] Enemy disappears
- [ ] Player loses life

---

# Phase 10 — Tower System

## Tower Class

Create:

- [ ] Tower
- [ ] Position
- [ ] Range
- [ ] Cost
- [ ] Attack cooldown
- [ ] Damage
- [ ] Pierce
- [ ] Targeting mode

## Placement

- [ ] Place tower
- [ ] Check placement area
- [ ] Check blocked area
- [ ] Prevent invalid placement
- [ ] Remove tower

## Range

- [ ] Calculate distance
- [ ] Detect enemies in range
- [ ] Draw range for debugging

## Targeting

- [ ] First
- [ ] Last
- [ ] Closest
- [ ] Strongest
- [ ] Weakest
- [ ] Random
- [ ] Custom Lua targeting later

## Attacking

- [ ] Attack timer
- [ ] Find target
- [ ] Select target
- [ ] Create projectile
- [ ] Reset attack timer

## Milestone

- [ ] Tower exists
- [ ] Tower can be placed
- [ ] Tower detects enemy
- [ ] Tower selects target
- [ ] Tower attacks

---

# Phase 11 — Projectile System

## Projectile Class

Create:

- [ ] Projectile
- [ ] Position
- [ ] Speed
- [ ] Direction
- [ ] Lifetime
- [ ] Target
- [ ] Damage
- [ ] Pierce

## Movement

- [ ] Move projectile
- [ ] Move toward target
- [ ] Detect target
- [ ] Detect lifetime expiration
- [ ] Remove projectile

## Collision

- [ ] Detect enemy collision
- [ ] Apply damage
- [ ] Reduce pierce
- [ ] Remove when pierce reaches zero

## First Combat Test

    Tower
      |
      v
    Projectile
      |
      v
    Enemy
      |
      v
    Damage
      |
      v
    Enemy Dies

## Milestone

- [ ] Tower fires
- [ ] Projectile moves
- [ ] Projectile hits enemy
- [ ] Enemy takes damage
- [ ] Enemy dies

---

# Phase 12 — Tower Lua Data

## Tower Data

- [ ] ID
- [ ] Name
- [ ] Description
- [ ] Sprite
- [ ] Icon
- [ ] Cost
- [ ] Range
- [ ] Attack speed
- [ ] Damage
- [ ] Pierce
- [ ] Projectile
- [ ] Targeting

## Example

    return {
        id = "tower.dart",

        name = "Dart Tower",

        sprite = "tower.dart",

        cost = 100,

        range = 150,

        attack_speed = 1.0,

        damage = 1,

        pierce = 1,

        projectile = "projectile.dart",

        targeting = "first"
    }

## C++

- [ ] Create TowerDefinition
- [ ] Load Lua tower
- [ ] Parse tower data
- [ ] Create tower from definition
- [ ] Apply stats

## Milestone

- [ ] towers/dart.lua exists
- [ ] C++ loads tower data
- [ ] Tower uses Lua stats
- [ ] Tower is no longer hardcoded

---

# Phase 13 — Enemy Lua Data

## Enemy Data

- [ ] ID
- [ ] Name
- [ ] Description
- [ ] Sprite
- [ ] Icon
- [ ] Health
- [ ] Speed
- [ ] Size
- [ ] Reward
- [ ] XP reward
- [ ] Properties
- [ ] Children

## Properties

- [ ] Flying
- [ ] Armoured
- [ ] Camouflaged
- [ ] Regeneration
- [ ] Shield
- [ ] Immunities
- [ ] Resistances

## Example

    return {
        id = "enemy.basic",

        name = "Basic Enemy",

        sprite = "enemy.basic",

        health = 100,

        speed = 50,

        reward = 10,

        size = 20,

        properties = {
            flying = false,
            camouflaged = false,
            armoured = false
        }
    }

## C++

- [ ] Create EnemyDefinition
- [ ] Load Lua enemy
- [ ] Parse enemy data
- [ ] Spawn enemy from definition
- [ ] Apply stats

## Milestone

- [ ] enemies/basic.lua exists
- [ ] C++ loads enemy data
- [ ] Enemy uses Lua stats

---

# Phase 14 — Tower Editor

## Qt Project

- [ ] Create Tower Editor project
- [ ] Create main window
- [ ] Create tower list
- [ ] Create properties panel
- [ ] Create preview panel

## Tower Management

- [ ] New tower
- [ ] Delete tower
- [ ] Duplicate tower
- [ ] Rename tower
- [ ] Open tower
- [ ] Save tower

## Basic Properties

- [ ] ID
- [ ] Name
- [ ] Description
- [ ] Icon
- [ ] Sprite
- [ ] Animation

## Economy

- [ ] Purchase cost
- [ ] Sell value
- [ ] Refund percentage

## Combat

- [ ] Range
- [ ] Attack speed
- [ ] Damage
- [ ] Pierce
- [ ] Damage type

## Targeting

- [ ] First
- [ ] Last
- [ ] Closest
- [ ] Strongest
- [ ] Weakest
- [ ] Random
- [ ] Custom Lua

## Projectile

- [ ] Projectile selector
- [ ] Projectile preview

## Preview

- [ ] Tower sprite preview
- [ ] Range preview
- [ ] Targeting preview
- [ ] Projectile preview

## Lua

- [ ] Save Lua
- [ ] Load Lua
- [ ] Export Lua
- [ ] Validate Lua
- [ ] Preview generated Lua

---

# Phase 15 — Enemy Editor

## Qt Project

- [ ] Create Enemy Editor
- [ ] Create main window
- [ ] Create enemy list
- [ ] Create properties panel
- [ ] Create preview panel

## Enemy Management

- [ ] New enemy
- [ ] Delete enemy
- [ ] Duplicate enemy
- [ ] Rename enemy
- [ ] Open enemy
- [ ] Save enemy

## Basic Properties

- [ ] ID
- [ ] Name
- [ ] Description
- [ ] Sprite
- [ ] Icon
- [ ] Animation

## Stats

- [ ] Health
- [ ] Speed
- [ ] Size
- [ ] Damage
- [ ] Lives lost
- [ ] Cash reward
- [ ] XP reward

## Properties

- [ ] Flying
- [ ] Camouflaged
- [ ] Armoured
- [ ] Regeneration
- [ ] Shield
- [ ] Immunities
- [ ] Resistances

## Behaviour

- [ ] Normal pathing
- [ ] Flying pathing
- [ ] Splitting
- [ ] Regeneration
- [ ] Teleporting
- [ ] Boss behaviour
- [ ] Custom Lua behaviour

## Children

- [ ] Child enemy selector
- [ ] Child count
- [ ] Spawn delay
- [ ] Spawn location
- [ ] Multiple child types

## Lua

- [ ] Save Lua
- [ ] Load Lua
- [ ] Export Lua
- [ ] Validate Lua
- [ ] Preview generated Lua

---

# Phase 16 — Economy

## Player Money

- [ ] Starting money
- [ ] Current money
- [ ] Add money
- [ ] Remove money
- [ ] Prevent negative money

## Tower Costs

- [ ] Purchase cost
- [ ] Sell value
- [ ] Refund percentage
- [ ] Upgrade cost

## Enemy Rewards

- [ ] Reward on kill
- [ ] Reward display
- [ ] Reward events

## Placement

- [ ] Check money
- [ ] Prevent purchase without enough money
- [ ] Deduct tower cost
- [ ] Refund tower when sold

## UI

- [ ] Money display
- [ ] Tower cost display
- [ ] Sell value display
- [ ] Insufficient funds feedback

---

# Phase 17 — Waves

## Runtime

Create:

- [ ] Wave class
- [ ] Wave number
- [ ] Wave name
- [ ] Start delay
- [ ] End condition
- [ ] Difficulty

## Enemy Groups

- [ ] Enemy type
- [ ] Quantity
- [ ] Spawn interval
- [ ] Spawn delay
- [ ] Path
- [ ] Spawn point

## Wave Control

- [ ] Start wave
- [ ] Spawn enemies
- [ ] Track remaining enemies
- [ ] Detect wave completion
- [ ] Start next wave
- [ ] Pause wave
- [ ] Resume wave
- [ ] Skip wave if supported

## Lua

- [ ] Wave definitions
- [ ] Enemy groups
- [ ] Spawn intervals
- [ ] Spawn paths
- [ ] Delays
- [ ] Conditional waves
- [ ] Custom Lua wave logic

---

# Phase 18 — Wave Editor

## Qt Project

- [ ] Create Wave Editor
- [ ] Create wave list
- [ ] Create wave properties panel
- [ ] Create enemy group list

## Waves

- [ ] New wave
- [ ] Delete wave
- [ ] Duplicate wave
- [ ] Reorder waves
- [ ] Wave number
- [ ] Wave name

## Enemy Groups

- [ ] Add enemy group
- [ ] Remove enemy group
- [ ] Enemy selector
- [ ] Quantity
- [ ] Spawn interval
- [ ] Spawn delay
- [ ] Path selector
- [ ] Spawn point selector

## Preview

- [ ] Wave timeline
- [ ] Enemy count
- [ ] Spawn timing
- [ ] Estimated duration
- [ ] Difficulty information

## Lua

- [ ] Save
- [ ] Load
- [ ] Export
- [ ] Validate
- [ ] Preview generated Lua

---

# Phase 19 — Upgrades

## Runtime

- [ ] Tower levels
- [ ] Upgrade costs
- [ ] Upgrade requirements
- [ ] Stat modifications
- [ ] New projectiles
- [ ] New attacks
- [ ] New abilities
- [ ] Sprite changes
- [ ] Upgrade restrictions

## Upgrade Tree

- [ ] Create upgrade paths
- [ ] Multiple branches
- [ ] Path restrictions
- [ ] Maximum level
- [ ] Cross-path restrictions

## UI

- [ ] Upgrade button
- [ ] Upgrade cost
- [ ] Current level
- [ ] Next-level stats
- [ ] Upgrade description

## Upgrade Editor

- [ ] Create Upgrade Editor
- [ ] Add upgrade
- [ ] Delete upgrade
- [ ] Edit cost
- [ ] Edit stat changes
- [ ] Edit description
- [ ] Connect upgrades
- [ ] Preview upgrade tree

---

# Phase 20 — Abilities

## Ability System

- [ ] Ability class
- [ ] Cooldown
- [ ] Activation
- [ ] Duration
- [ ] Activation delay
- [ ] Charges

## Targeting

- [ ] Self
- [ ] Tower
- [ ] Enemy
- [ ] Area
- [ ] Global
- [ ] Custom Lua

## Effects

- [ ] Damage
- [ ] Buff
- [ ] Debuff
- [ ] Slow
- [ ] Stun
- [ ] Money
- [ ] Spawn enemy
- [ ] Spawn projectile
- [ ] Custom Lua effect

## UI

- [ ] Ability button
- [ ] Cooldown display
- [ ] Ability activation
- [ ] Disabled state

## Ability Editor

- [ ] Create Ability Editor
- [ ] Ability list
- [ ] Basic properties
- [ ] Cooldown
- [ ] Duration
- [ ] Targeting
- [ ] Effects
- [ ] Animation
- [ ] Sound
- [ ] Lua export
- [ ] Lua validation

---

# Phase 21 — Animation

## Runtime

- [ ] Animation class
- [ ] Sprite animation
- [ ] Animation states
- [ ] Frame timing
- [ ] Looping
- [ ] Animation transitions

## States

- [ ] Idle
- [ ] Attack
- [ ] Hit
- [ ] Death
- [ ] Ability

## Spritesheets

- [ ] Load spritesheet
- [ ] Slice spritesheet
- [ ] Select frames
- [ ] Frame dimensions
- [ ] Frame duration

## Animation Editor

- [ ] Create Animation Editor
- [ ] Import spritesheet
- [ ] Slice spritesheet
- [ ] Select frames
- [ ] Set FPS
- [ ] Set frame duration
- [ ] Loop animation
- [ ] Ping-pong animation
- [ ] Preview animation
- [ ] Export animation

---

# Phase 22 — Effects

## Effects

- [ ] Hit effects
- [ ] Explosion effects
- [ ] Projectile trails
- [ ] Death effects
- [ ] Tower attack effects
- [ ] Ability effects

## Particle System

- [ ] Particle class
- [ ] Particle position
- [ ] Particle velocity
- [ ] Particle lifetime
- [ ] Particle texture
- [ ] Particle scale
- [ ] Particle rotation
- [ ] Particle alpha

## Particle Editor

- [ ] Create Particle Editor
- [ ] Particle preview
- [ ] Particle count
- [ ] Lifetime
- [ ] Speed
- [ ] Direction
- [ ] Scale
- [ ] Rotation
- [ ] Alpha
- [ ] Export particle definition

---

# Phase 23 — Audio

## Runtime

- [ ] Load sound
- [ ] Play sound
- [ ] Stop sound
- [ ] Pause sound
- [ ] Resume sound
- [ ] Music playback
- [ ] Music switching
- [ ] Volume control

## Sound Types

- [ ] Tower attack
- [ ] Enemy hit
- [ ] Enemy death
- [ ] Ability
- [ ] UI
- [ ] Wave start
- [ ] Wave completion
- [ ] Game over

## Audio Settings

- [ ] Master volume
- [ ] Music volume
- [ ] Sound effects volume
- [ ] Mute

## Audio Tool

- [ ] Browse audio
- [ ] Preview audio
- [ ] Set volume
- [ ] Assign audio events
- [ ] Import audio
- [ ] Remove audio

---

# Phase 24 — Asset Manager

## Asset Types

- [ ] Images
- [ ] Spritesheets
- [ ] Animations
- [ ] Sounds
- [ ] Music
- [ ] Maps
- [ ] Towers
- [ ] Enemies
- [ ] Projectiles
- [ ] Abilities
- [ ] Waves
- [ ] Lua scripts

## Browser

- [ ] Search by name
- [ ] Search by ID
- [ ] Filter by type
- [ ] Filter by folder
- [ ] Sort by name
- [ ] Sort by type

## Preview

- [ ] Image preview
- [ ] Sprite preview
- [ ] Animation preview
- [ ] Audio preview
- [ ] Lua preview

## Management

- [ ] Import
- [ ] Delete
- [ ] Rename
- [ ] Move
- [ ] Duplicate

## Validation

- [ ] Missing assets
- [ ] Broken references
- [ ] Duplicate IDs
- [ ] Invalid files
- [ ] Dependency checking

---

# Phase 25 — Engine Debugger

## Rendering

Display:

- [ ] FPS
- [ ] Frame time
- [ ] Draw calls
- [ ] Vertices
- [ ] Sprite count
- [ ] Texture count
- [ ] Batches

## Game

Display:

- [ ] Current wave
- [ ] Money
- [ ] Lives
- [ ] Game speed
- [ ] Enemy count
- [ ] Tower count
- [ ] Projectile count

## Debug Controls

- [ ] Pause
- [ ] Resume
- [ ] Step frame
- [ ] Change game speed
- [ ] Spawn enemy
- [ ] Spawn tower
- [ ] Kill enemy
- [ ] Give money
- [ ] Reset wave

## Entity Inspector

- [ ] Select entity
- [ ] Inspect entity
- [ ] Modify entity
- [ ] Delete entity
- [ ] Spawn entity
- [ ] View entity ID
- [ ] View entity definition

---

# Phase 26 — Lua Debugging

## Lua Console

- [ ] Lua console
- [ ] Execute Lua commands
- [ ] Print Lua values
- [ ] Inspect Lua tables
- [ ] Call Lua functions

## Errors

- [ ] Syntax errors
- [ ] Runtime errors
- [ ] Error line numbers
- [ ] Error source file
- [ ] Stack traces

## Script Management

- [ ] List loaded scripts
- [ ] Reload script
- [ ] Reload all scripts
- [ ] Detect changed scripts

## Performance

- [ ] Lua execution timing
- [ ] Script execution count
- [ ] Detect slow scripts
- [ ] Measure Lua calls per frame

## Validation

- [ ] Validate map scripts
- [ ] Validate tower scripts
- [ ] Validate enemy scripts
- [ ] Validate projectile scripts
- [ ] Validate wave scripts
- [ ] Validate ability scripts

---

# Phase 27 — Optimisation

## Profiling

Measure:

- [ ] CPU usage
- [ ] Rendering time
- [ ] Draw calls
- [ ] Lua execution
- [ ] Entity updates
- [ ] Memory usage
- [ ] Texture memory
- [ ] Asset loading time

## Rendering

- [ ] Sprite batching
- [ ] Reduce texture changes
- [ ] Reduce draw calls
- [ ] Avoid unnecessary rendering
- [ ] Texture caching
- [ ] Efficient sprite regions
- [ ] Efficient camera culling

## Game Logic

- [ ] Efficient entity updates
- [ ] Efficient collision
- [ ] Efficient targeting
- [ ] Avoid unnecessary Lua calls
- [ ] Efficient pathing
- [ ] Efficient projectile handling
- [ ] Efficient wave spawning

## Entity Management

- [ ] Avoid excessive allocations
- [ ] Reuse objects where useful
- [ ] Efficient entity storage
- [ ] Efficient removal

## Stress Tests

- [ ] 100 enemies
- [ ] 500 enemies
- [ ] 1,000 enemies
- [ ] 100 towers
- [ ] 500 towers
- [ ] Large projectile count
- [ ] Large particle count
- [ ] Large maps

## Compatibility

- [ ] Integrated graphics
- [ ] Older GPUs
- [ ] Older CPUs
- [ ] Low RAM
- [ ] Raylib implementations
- [ ] Different resolutions
- [ ] Windowed mode
- [ ] Fullscreen

---

# Phase 28 — Project/Game Editor

## Project Management

- [ ] New project
- [ ] Open project
- [ ] Save project
- [ ] Project name
- [ ] Project ID
- [ ] Project directory

## Asset Configuration

- [ ] Asset directory
- [ ] Map directory
- [ ] Tower directory
- [ ] Enemy directory
- [ ] Projectile directory
- [ ] Wave directory
- [ ] Ability directory
- [ ] Script directory
- [ ] Audio directory

## Game Settings

- [ ] Starting map
- [ ] Resolution
- [ ] Window mode
- [ ] VSync
- [ ] Audio settings
- [ ] Lua settings
- [ ] Debug settings

## Project Validation

- [ ] Missing assets
- [ ] Missing maps
- [ ] Missing scripts
- [ ] Duplicate IDs
- [ ] Broken dependencies

---

# Phase 29 — Packaging

## Release Build

- [ ] Configure Release build
- [ ] Build executable
- [ ] Test clean build
- [ ] Test without development environment

## Dependencies

Package:

- [ ] Qt libraries
- [ ] Lua
- [ ] Raylib requirements
- [ ] Engine DLLs
- [ ] Assets
- [ ] Lua files
- [ ] Configuration files

## Windows

- [ ] Portable build
- [ ] Installer
- [ ] Application icon
- [ ] Start menu shortcut
- [ ] Uninstaller

## Clean Machine Test

- [ ] Install on another PC
- [ ] Start game
- [ ] Load map
- [ ] Load assets
- [ ] Play game
- [ ] Save settings
- [ ] Close game
- [ ] Reopen game

---

# Phase 30 — Modding

## Mod Support

- [ ] Mod directory
- [ ] Detect mods
- [ ] Load mods
- [ ] Enable/disable mods
- [ ] Mod metadata
- [ ] Mod dependencies
- [ ] Mod versioning

## External Data

Allow mods to add:

- [ ] Lua scripts
- [ ] Towers
- [ ] Enemies
- [ ] Projectiles
- [ ] Abilities
- [ ] Maps
- [ ] Waves
- [ ] Sprites
- [ ] Animations
- [ ] Sounds
- [ ] Music

## Validation

- [ ] Invalid mod detection
- [ ] Missing dependency detection
- [ ] Duplicate ID detection
- [ ] Invalid Lua detection
- [ ] Missing asset detection

## Mod Packaging

- [ ] Create mod package
- [ ] Install mod package
- [ ] Remove mod
- [ ] Mod version information

---

# Major Milestones

## Milestone 1 — Renderer

- [ ] Qt application
- [ ] Raylib context
- [ ] Raylib rendering
- [ ] Textured sprite
- [ ] Camera
- [ ] Multiple sprites
- [ ] Alpha blending

---

## Milestone 2 — Lua

- [ ] Lua state
- [ ] Lua file loading
- [ ] Lua table parsing
- [ ] C++ data structures
- [ ] Error handling

---

## Milestone 3 — Map Pipeline

    Qt Map Editor
          |
          v
       map.lua
          |
          v
     C++ Map Loader
          |
          v
       C++ Map
          |
          v
     Raylib Renderer

- [ ] Map Editor
- [ ] Map Lua format
- [ ] Map loader
- [ ] Map renderer
- [ ] Paths
- [ ] Spawn points
- [ ] Exit points
- [ ] Placement areas

---

## Milestone 4 — Enemy

- [ ] Enemy class
- [ ] Enemy Lua definition
- [ ] Enemy spawning
- [ ] Path following
- [ ] Waypoint system
- [ ] Enemy reaches exit
- [ ] Player loses lives
- [ ] Enemy reward

---

## Milestone 5 — Tower

- [ ] Tower class
- [ ] Tower Lua definition
- [ ] Tower placement
- [ ] Range
- [ ] Targeting
- [ ] Attack cooldown
- [ ] Projectile firing

---

## Milestone 6 — Combat

    Tower
      |
      v
    Target Enemy
      |
      v
    Fire Projectile
      |
      v
    Projectile Hits Enemy
      |
      v
    Damage
      |
      v
    Enemy Dies
      |
      v
    Reward Player

- [ ] Projectile movement
- [ ] Collision
- [ ] Damage
- [ ] Pierce
- [ ] Enemy death
- [ ] Enemy reward

---

# Milestone 7 — Playable Prototype

The first genuinely playable version should contain:

- [ ] Map
- [ ] Camera
- [ ] Enemy
- [ ] Enemy path
- [ ] Enemy spawning
- [ ] Tower
- [ ] Tower placement
- [ ] Targeting
- [ ] Projectile
- [ ] Damage
- [ ] Enemy death
- [ ] Money
- [ ] Lives
- [ ] Waves
- [ ] Win condition
- [ ] Lose condition

## Prototype Flow

    Launch Game
        |
        v
    Load Map
        |
        v
    Start Wave
        |
        v
    Enemies Spawn
        |
        v
    Player Places Towers
        |
        v
    Towers Target Enemies
        |
        v
    Projectiles Fire
        |
        v
    Enemies Take Damage
        |
        v
    Enemies Die
        |
        +----> Player Gets Money
        |
        v
    Wave Ends
        |
        v
    Next Wave

---

# Milestone 8 — Content Pipeline

Every major game-data type should eventually follow the same pipeline.

## Maps

    Map Editor
        |
        v
    map.lua
        |
        v
    C++ Map Loader
        |
        v
    Runtime

## Towers

    Tower Editor
        |
        v
    tower.lua
        |
        v
    C++ Tower Loader
        |
        v
    Runtime

## Enemies

    Enemy Editor
        |
        v
    enemy.lua
        |
        v
    C++ Enemy Loader
        |
        v
    Runtime

## Waves

    Wave Editor
        |
        v
    wave.lua
        |
        v
    C++ Wave Loader
        |
        v
    Runtime

- [ ] Map Editor exports Lua
- [ ] Tower Editor exports Lua
- [ ] Enemy Editor exports Lua
- [ ] Wave Editor exports Lua
- [ ] Runtime loads all formats
- [ ] Editors validate data
- [ ] Runtime validates data
- [ ] Missing assets are detected
- [ ] Broken references are detected

---

# Milestone 9 — Full Engine

## Core

- [ ] Engine
- [ ] Game loop
- [ ] Timing
- [ ] Entity management
- [ ] Event system

## Rendering

- [ ] Raylib
- [ ] Textures
- [ ] Sprites
- [ ] Spritesheets
- [ ] Camera
- [ ] Batching
- [ ] Animation
- [ ] Particles

## Gameplay

- [ ] Maps
- [ ] Towers
- [ ] Enemies
- [ ] Projectiles
- [ ] Waves
- [ ] Economy
- [ ] Upgrades
- [ ] Abilities

## Data

- [ ] Lua maps
- [ ] Lua towers
- [ ] Lua enemies
- [ ] Lua projectiles
- [ ] Lua waves
- [ ] Lua abilities

## Tools

- [ ] Map Editor
- [ ] Tower Editor
- [ ] Enemy Editor
- [ ] Projectile Editor
- [ ] Ability Editor
- [ ] Wave Editor
- [ ] Animation Editor
- [ ] Asset Manager
- [ ] Lua Editor
- [ ] Engine Debugger
- [ ] Audio Tool

## Final Systems

- [ ] Audio
- [ ] Particles
- [ ] Debugging
- [ ] Profiling
- [ ] Optimisation
- [ ] Packaging
- [ ] Modding

---

# Recommended Development Order

Do not try to build every editor immediately.

Follow this order:

1. [ ] Project setup
2. [ ] Basic Qt application
3. [ ] Engine class
4. [ ] Game loop
5. [ ] Raylib renderer
6. [ ] Textured sprite
7. [ ] Camera
8. [ ] Asset manager
9. [ ] Lua integration
10. [ ] Map data format
11. [ ] Map loader
12. [ ] Map renderer
13. [ ] Basic Map Editor
14. [ ] Enemy system
15. [ ] Enemy Lua data
16. [ ] Enemy movement
17. [ ] Tower system
18. [ ] Tower Lua data
19. [ ] Tower targeting
20. [ ] Projectile system
21. [ ] First combat test
22. [ ] Economy
23. [ ] Waves
24. [ ] Tower Editor
25. [ ] Enemy Editor
26. [ ] Wave Editor
27. [ ] Upgrades
28. [ ] Abilities
29. [ ] Animation
30. [ ] Effects
31. [ ] Audio
32. [ ] Asset Manager
33. [ ] Engine Debugger
34. [ ] Lua Debugger
35. [ ] Optimisation
36. [ ] Project Editor
37. [ ] Packaging
38. [ ] Modding

---

# First Goal

Do not worry about upgrades, abilities, particles, audio, modding, or the other editors initially.

The first objective is:

- [ ] Qt application opens
- [ ] Raylib renders
- [ ] Lua loads
- [ ] C++ loads Lua map
- [ ] Map renders
- [ ] Enemy spawns
- [ ] Enemy follows path
- [ ] Tower exists
- [ ] Tower targets enemy
- [ ] Projectile fires
- [ ] Projectile hits enemy
- [ ] Enemy takes damage
- [ ] Enemy dies

Once all of these work, the core engine pipeline exists.

---

# First Playable Version

The first playable version should eventually be:

    Map
      |
      +-- Enemy Path
      |
      +-- Spawn Point
      |
      +-- Exit
      |
      +-- Tower Placement
              |
              v
            Tower
              |
              v
           Targeting
              |
              v
          Projectile
              |
              v
            Enemy
              |
              v
            Damage
              |
              v
          Enemy Dies
              |
              v
          Player Money

With:

- [ ] Multiple enemies
- [ ] Multiple towers
- [ ] Multiple projectiles
- [ ] Enemy rewards
- [ ] Tower costs
- [ ] Lives
- [ ] Waves
- [ ] Win state
- [ ] Lose state

---

# Long-Term Tool List

## Core Tools

- [ ] Map Editor
- [ ] Tower Editor
- [ ] Enemy Editor
- [ ] Projectile Editor
- [ ] Ability Editor
- [ ] Wave Editor
- [ ] Animation Editor
- [ ] Asset Manager
- [ ] Project/Game Editor
- [ ] Engine Debugger
- [ ] Lua Script Editor
- [ ] Audio Tool

## Optional / Later Tools

- [ ] Particle Editor
- [ ] Visual Effects Editor
- [ ] Upgrade Tree Editor
- [ ] Localization Editor
- [ ] Dialogue Editor
- [ ] Save Game Editor
- [ ] Mod/Package Builder
- [ ] Asset Importer
- [ ] Asset Converter
- [ ] Build/Package Tool

---

# Definition of Done — Core Engine

The core engine is considered functional when:

- [ ] Application starts
- [ ] Raylib renderer works
- [ ] Camera works
- [ ] Textures work
- [ ] Sprites work
- [ ] Lua works
- [ ] Maps load from Lua
- [ ] Maps render
- [ ] Enemies spawn
- [ ] Enemies follow paths
- [ ] Towers can be placed
- [ ] Towers detect enemies
- [ ] Towers select targets
- [ ] Towers fire projectiles
- [ ] Projectiles hit enemies
- [ ] Enemies take damage
- [ ] Enemies die
- [ ] Money is awarded
- [ ] Lives can be lost
- [ ] Waves spawn enemies
- [ ] Win condition works
- [ ] Lose condition works

---

# Definition of Done — Content Pipeline

- [ ] Map Editor creates maps
- [ ] Map Editor exports Lua
- [ ] Runtime loads maps
- [ ] Tower Editor creates towers
- [ ] Tower Editor exports Lua
- [ ] Runtime loads towers
- [ ] Enemy Editor creates enemies
- [ ] Enemy Editor exports Lua
- [ ] Runtime loads enemies
- [ ] Wave Editor creates waves
- [ ] Wave Editor exports Lua
- [ ] Runtime loads waves
- [ ] Asset Manager manages assets
- [ ] Lua validation works
- [ ] Missing assets are detected
- [ ] Broken references are detected

---

# Definition of Done — Release

- [ ] Release build works
- [ ] Game runs outside Qt Creator
- [ ] Required Qt libraries included
- [ ] Lua included
- [ ] Assets included
- [ ] Maps included
- [ ] Scripts included
- [ ] Configuration included
- [ ] Clean installation tested
- [ ] Portable version tested
- [ ] Different resolutions tested
- [ ] Low-end hardware tested
- [ ] Raylib compatibility tested
- [ ] Performance profiled
- [ ] Major bugs fixed
- [ ] README updated
- [ ] Version number assigned
- [ ] GitHub release created

---

# Current Focus

## Current Objective

Build the smallest possible engine that can:

    Qt
      |
      v
    C++
      |
      v
    Raylib
      |
      v
    Render a sprite

Then add:

    Lua
      |
      v
    Load map
      |
      v
    Render map

Then:

    Enemy
      |
      v
    Follow path

Then:

    Tower
      |
      v
    Target enemy
      |
      v
    Fire projectile
      |
      v
    Damage enemy

## Do Not Build Yet

- [ ] Upgrade system
- [ ] Ability system
- [ ] Particle editor
- [ ] Audio editor
- [ ] Modding
- [ ] Packaging
- [ ] Full Asset Manager
- [ ] Full Debugger
- [ ] Multiple advanced editors

