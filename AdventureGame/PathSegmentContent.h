//
//  PathSegmentContent.h
//  AdventureGame
//
//  Created by Li Pan on 2016-01-17.
//  Copyright © 2016 Cory Alder. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ENUM(NSInteger, Content) {
    Treasure,
    Creature,
    Nothing
};

@interface PathSegmentContent : NSObject

@property (nonatomic, assign) BOOL treasure;
@property (nonatomic, assign) BOOL creature;
@property (nonatomic, assign) BOOL nothing;



@end
