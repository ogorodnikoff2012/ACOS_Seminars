int rnd_seed;
int random() {
    return rnd_seed = (rnd_seed * 106 + 1283) % 6075;
}
