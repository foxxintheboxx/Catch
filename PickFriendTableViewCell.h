//
//  PickFriendTableViewCell.h
//  Catch - Share Happy
//
//  Created by Ian Fox on 9/9/14.
//  Copyright (c) 2014 Catch Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BallView.h"
@interface PickFriendTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet BallView *pickFriendButton;
@property (strong, nonatomic) IBOutlet UILabel *friendName;
-(void) tapFriend: (bool) picked;
@end
