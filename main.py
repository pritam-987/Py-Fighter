import pygame as pyg

pyg.init()

# game constants
HEIGHT, WIDTH = 800, 600
FPS = 60

# assets


window = pyg.display.set_mode((HEIGHT, WIDTH))
clock = pyg.time.Clock()


def main():
    run = True

    while run:
        for event in pyg.event.get():
            if event.type == pyg.QUIT:
                run = False

        clock.tick(FPS)
        pyg.display.update()
    pyg.quit()


if __name__ == "__main__":
    main()
