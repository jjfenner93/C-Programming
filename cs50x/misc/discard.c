// Discarded code.


    int x = 0;
    int x2 = 0;
    int x3 = 0;
    x += letters;
    x2 += letters;
    index = 0.0588 * L - 0.296 * S - 15.8
    for (int i2 = 0; i2 < words; i2++)
    {
        if (i2 % 100 == 0)
        {
            grade++;
            x3 = x / x2;
        }
    }

        if (newOne2 >= 16)
    {
        printf("Grade 16+\n");
    } else if (newOne2 <= 1) {
        printf("Before Grade 1\n");
    }
    printf("The actual Grade: %d\n", index);
    printf("The actual Grade rounded: %d\n", newOne2);

      int x = 0;
    int x2 = 0;
    int x3 = 0;
    int x4 = 0;
    int x5 = 0;
    int x6 = 0;
    x += letters;
    x2 += letters;
    x4 += sentences;
    x5 += sentences;
    for (int i2 = 0; i2 < words; i2++)
    {
        if (i2 % 100 == 0)
        {
            grade++;
            x3 = letters / grade;
            x6 = sentences / grade;
        }
    }

    int L = round(x3);
    int S = round(x6);
    printf("X3: %d\n", L);


        int array[100];

        for (int i = 0; i < words; i++)
        {
            if (i % 100 == 0)
            {
                counter++; // Add the amount to the array and save how many letters there are per 100 words.
                // Somehow save how many letters there are per 100 words.
                for (int j = 0; j < counter; j++)
                {
                    array[j] = array[j];
                }
                printf("Array: %d\n", array);
            }
        }


        // Does not behave at all how I want, I want it to add to the counter one for every 100 words it hits

         while (i < words) // You need somehow get the right count of words that per 100, how many times
    {
        if (i % 100 == 0) // It is only adding one to the counter only once it has seen it has gone over.
        {
            counter++;
        }
        i++;
    } // It will not add one to the counter only after it has recognised 100 as divisible.

    // Ok so this works now and adds to the counter properly every 100 words.
    printf("Counter: %d\n", counter); // Remember that I added 1 to it so that it counts the first word.

    int dividedWords = words / 100;
    int dividedWordsR = round(dividedWords); // It's checking how many times do the words go into 100.
    //printf("How many times the words are divisible by 100: %d\n", dividedWordsR);
    // while there are quarters add a quarter.

    // gets the letters and divide by 2. (half surely?)

    int L1 = letters / dividedWordsR;
    int S1 = sentences / dividedWordsR;
    L = round(L1 * 100);
    S = round(S1 * 100);
    // Will I need to do a loop here in order to get the answer.

    index = 0.0588 * L - 0.296 * S - 15.8;
    int index2 = round(index * 100);
    if (index2 <= 0)
    {
        printf("Before Grade 1\n");
        return 0;
    } else if (index2 >= 16)
    {
        printf("Grade 16+\n");
    } else {
        printf("Grade %d\n", index2);
    }