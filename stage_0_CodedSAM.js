const name = "Samuel Anozie";
const email = "samuelanozie10@yahoo.com";
const slack = "@CodedSAM";
const biostack = "Software Development";
const twitter = "@CodedSAM_";

function hammingDist(str1, str2)
{
    let i = 0, count = 0;
    while (i < str1.length)
    {
        if (str1[i] != str2[i])
            count++;
        i++;
    }
    return count;
}
const hamming = hammingDist(slack,twitter);

console.log(name);
console.log(email);
console.log(slack);
console.log(biostack);
console.log(twitter);
console.log(hamming);
