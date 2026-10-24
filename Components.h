
#pragma once

struct Position
{
    float x = 0.f;
    float y = 0.f;
};

struct Velocity
{
    float x = 0.f;
    float y = 0.f;
};

// Скорость движения сущности
struct MoveStats
{
    float speed = 100.f;
};

struct Player {};

enum class EnemyKind
{
    Grunt,
    Fast,
    Tank,
    Rocketeer
};

struct Enemy
{
    EnemyKind kind = EnemyKind::Grunt;
};

enum class WeaponType
{
    Pistol,
    Shotgun,
    Laser,
    Bazooka
};

struct Weapon
{
    WeaponType type = WeaponType::Pistol;
    float cooldown = 0.3f;
    float timer = 0.f;
};

struct Bullet
{
    bool fromPlayer = true;
};

struct Beam
{
    float x1 = 0.f;
    float y1 = 0.f;
    float x2 = 0.f;
    float y2 = 0.f;
    float life = 0.f;
};

struct Health
{
    int hp = 1;
    int max = 1;
};

struct Shooter
{
    float cooldown = 1.5f;
    float timer = 0.0f;
};

struct InputState
{
    bool left = false;
    bool right = false;
    bool up = false;
    bool down = false;
    bool shoot = false;
    bool restart = false;

    float aimX = 0.f;
    float aimY = 0.f;

    bool num1 = false;
    bool num2 = false;
    bool num3 = false;
    bool num4 = false;
};

struct Wall
{
    float w = 40.f;
    float h = 40.f;
};

struct Collider
{
    float w = 20.f;
    float h = 20.f;
};

struct GameData
{
    int score = 0;
    int wave = 0;
};

struct Explosive
{
    float radius = 60.f;
    int damage = 3;
};


struct Explosion
{
    float x = 0.f, y = 0.f, radius = 0.f;
    float life = 0.25f, maxLife = 0.25f;
};