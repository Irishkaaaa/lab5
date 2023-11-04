    CC = gcc CFLAGS =

    programs = server client all: $(programs)
    server: server.c common.h
    $(CC) $(CFLAGS) $< -o $@

    client: client.c common.h
    $(CC) $(CFLAGS) $< -o $@

    clean:
    -rm $(programs) *.o


