#include <iostream>

int main(){
    std::cout << "How old are you? ";
    
    int ageOld{};
    std::cin >> ageOld;

    if(ageOld < 10){
        std::cout << "You're too young to be here... Go away."; }
    else if(ageOld >= 11 && ageOld <= 16){
        std::cout << "You're just the right age... :)";
        std::cin.ignore(1000, '\n');
        std::cin.get();
        std::cout << "...To study dude, what did you think??? Weirdo...";
        std::cin.get();
        return 0; }
    else if(ageOld == 17){
        std::cout << "Hey! Stop copying me! >:(";
        std::cin.ignore(1000, '\n');
        std::cin.get();
        std::cout << "Press enter to delete 'System32' from your PC and never copy Sniphyric again...";
        std::cin.get();
        return 0; }
    else if(ageOld >= 18 && ageOld <= 24){
        std::cout << "You're boring. :P"; }
    else if(ageOld == 25){
        std::cout << "Your frontal lobe just developed! But I bet you're still dumb as a toddler."; }
    else if(ageOld >= 26 && ageOld <= 49){
        std::cout << "You've officially reached 'unc status'. Congrats, Unc.";
        std::cin.ignore(1000, '\n');
        std::cin.get();
            std::cout << "Now, to prove you're the real unc, answer the following question:";
            int questAnswer{ 2005 };
            int answerGuess{};
            std::cin.ignore(1000, '\n');
            std::cout << "Which year was the console: 'Xbox 360' released? No cheating. What year? ";
            std::cin >> answerGuess;
                if(answerGuess == questAnswer){
                std::cout << "Nice... You definitely did know that unc...";
                return 0; }
                    else{ std::cout << "You're not a real OG, pal... Get outta here.";
                    return 0; } }
    else if(ageOld == 50){
        std::cout << "You're halfway to 100! Damn. That's a lot."; }
    else if(ageOld == 67){
        std::cout << "Wow. Really funny.";
        std::cin.ignore(1000, '\n');
        std::cin.get();
        std::cout << "Haehahh 67 look at me guys.";
        std::cin.ignore(1000, '\n');
        std::cout << "Has the fun arrived yet?";
        std::cin.ignore(1000, '\n');
        std::cout << "Wait, you're really 67 years old???";
        std::cin.ignore(1000, '\n');
        std::cout << "Oh...";
        std::cin.ignore(1000, '\n');
        std::cout << "LMAO.";
        std::cin.ignore(1000, '\n');
        std::cout << "Look at you.";
        std::cin.ignore(1000, '\n');
        std::cout << "You're 67 years old in the big... Uhh... Whatever year is it now. Lolll.";
        std::cin.ignore(1000, '\n');
        std::cout << "Get out of here, lmao.";
        std::cin.get();
        return 0; }
    else if(ageOld >= 51 && ageOld <= 79){
        std::cout << "Time to think on when to retire, right? Maybe go to the Bahamas? It would be cool."; }
    else if(ageOld >= 80 && ageOld <= 99){
        std::cout << "You're not that old...";
        std::cin.ignore(1000, '\n');
        std::cin.get();
        std::cout << "Or are you..?";
        std::cin.ignore(1000, '\n');
        std::cout << "Oh my god. Congrats? Holy cow.";
        std::cin.get();
        return 0; }
    else if(ageOld >= 100 && ageOld <= 124){
        std::cout << "100 years. Wow. I really bet you're 100 or more for real. But if you say so...";
        std::cin.ignore(1000, '\n');
        std::cin.get();
        std::cout << "Who am I to judge right?";
        std::cin.ignore(1000, '\n');
        std::cout << "You little liar...";
        std::cin.ignore(1000, '\n');
        std::cout << "Or little... Old... Man... Woman... Uhh, I don't know...";
        std::cin.ignore(1000, '\n');
        std::cout << "Just leave old person. Go away.";
        std::cin.get();
        return 0; }
    else if(ageOld >= 125 && ageOld <= 999){
        std::cout << "Okay, you're just joking at this point.";
        std::cin.ignore(1000, '\n');
        std::cin.get();
        std::cout << "I mean... Just how. How?";
        std::cin.ignore(1000, '\n');
        std::cout << "You must be trembling to just type on the keyboard right now.";
        std::cin.ignore(1000, '\n');
        std::cout << "Or laughing right now...";
        std::cin.ignore(1000, '\n');
        std::cout << "Laughing at me for believing in you... :(";
        std::cin.ignore(1000, '\n');
        std::cout << "I hate you now. ;(";
        std::cin.ignore(1000, '\n');
        std::cout << "Go away...";
        std::cin.get();
        return 0; }
    else{
        std::cout << "Uhh, you're... Impossible...";
        std::cin.ignore(1000, '\n');
        std::cin.get();
        std::cout << "That's just... Not possible...";
        std::cin.ignore(1000, '\n');
        std::cout << "Just go away... Now.";
        std::cin.get();
        return 0; }

    // the below text will clean up any buffer.
    std::cin.ignore(1000, '\n');
    std::cin.get();
    std::cout << "Press enter to leave. Just make sure to come back to discover more endings. :)";
    std::cin.get();

    return 0;
}