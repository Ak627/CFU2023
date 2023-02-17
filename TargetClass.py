import pygame
pygame.init()
screen = pygame.display.set_mode((800,800))
clock = pygame.time.Clock()



def targetScore(c):#medium problem
    score = 0
    if c == 1:
        score += 50
        return score
    elif c == 2:
        score += 40
        return score
    elif c == 3:
        score += 30
        return score
    elif c == 4:
        score += 20
        return score
    elif c== 5:
        score += 10
        return score
    else:
        return score

#level = int(input("What level did you hit? 1-5: "))

#print("You got a score of", targetScore(level), "!")
#^ uncomment these lines to check the medium, need to be commented for spicy to work properly


class target:
    def __init__(self, xpos, ypos, Vx):
        self.xpos = xpos
        self.ypos = ypos
        self.Vx = Vx
    def draw(self):
        pygame.draw.circle(screen, (255, 0,0), (self.xpos, self.ypos), 50)
        pygame.draw.circle(screen, (255,255,255),(self.xpos, self.ypos), 40)
        pygame.draw.circle(screen, (0,0,255),(self.xpos, self.ypos), 30)
        pygame.draw.circle(screen, (255,255,255),(self.xpos, self.ypos), 20)
        pygame.draw.circle(screen, (255,0,0),(self.xpos, self.ypos), 10)
    def move(self):
        if self.xpos + 50 >= 800:
            self.Vx *= -1
        if self.xpos <= 0:
            self.Vx *= -1
            
        self.xpos += self.Vx
            
        



t1 = target(400,400, 5)
t2 = target(300, 200, 10)
t3 = target(500, 700, 3)
while True:
    clock.tick(60)
    screen.fill((0,0,0))
    t1.draw()
    t2.draw()
    t3.draw()
    t1.move()
    t2.move()
    t3.move()
    pygame.display.flip()
pygame.quit()



