/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
const charactersMap = (string1, string2) => {
    const map = {};
    const set = new Set();

    for (let charIndex = 0; charIndex < string1.length; charIndex++) {
        if (!set.has(string2[charIndex]) || map[string1[charIndex]]) {
            set.add(string2[charIndex]);
            map[string1[charIndex]] = string2[charIndex];
        } else {
            map[string1[charIndex]] = "";
        }
    }

    return map;
};

const mappedString = (string, map) => {
    let mappedString = "";
    
    for (let c of string) {
        mappedString += map[c];
    }

    return mappedString;
}

const isIsomorphic = (string1, string2) => {
    const map = charactersMap(string1, string2);
    const mappedString1 = mappedString(string1, map);
    return mappedString1 === string2;
};
