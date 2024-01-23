
while True:
    try:
        num_game_play, id_self = [int(i) for i in input().split(' ')]
        count_post = 0

        while num_game_play:
            num_game_play -= 1
            id_autor, fl_cs = [int(i) for i in input().split(' ')]
            if id_autor == id_self and fl_cs == 0:
                count_post += 1

        print(count_post)
    except EOFError:
        break