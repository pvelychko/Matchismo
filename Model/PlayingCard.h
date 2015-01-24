//
//  PlayingCard.h
//  Matchismo
//
//  Created by Pavlo Velychko on 24/01/15.
//  Copyright (c) 2015 CS193p. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSInteger rank;

+ (NSArray *)validSuits;
+ (NSArray *)maxRank;

@end
