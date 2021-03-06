	//
//  NKDialogList.h
//  VKMessager
//
//  Created by Nick Kibish on 28.09.14.
//  Copyright (c) 2014 Nick Kibish. All rights reserved.
//

#import <UIKit/UIKit.h>

/*
 gray text  121 124 128
 blue text  78 113 153
 title      94 136 185
 
 not read   237 242 247
 */

@class NKUser;
@interface NKDialogList : UITableViewController <UITabBarDelegate, UITableViewDataSource>

@property (strong, nonatomic) NSMutableArray *dialogs;
@property (strong, nonatomic) NSMutableDictionary *users;

- (void)update;
- (IBAction)logOut:(id)sender;

@end

@interface NKUser : NSObject

@property (assign, nonatomic) BOOL isDialog;
@property (strong, nonatomic) UIImage *avatar;
@property (strong, nonatomic) NSString *fullName;

@end

@interface NKDialogCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UIImageView *avatar;
@property (strong, nonatomic) IBOutlet UIImageView *myAvatar;
@property (strong, nonatomic) IBOutlet UILabel *userName;
@property (strong, nonatomic) IBOutlet UILabel *messagePreview;
@property (strong, nonatomic) IBOutlet UIView *messageView;

@end