//
//  IMViewController.h
//  JXBContainer
//
//  Created by 金修博 on 2018/11/27.
//  Copyright © 2018 金修博. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol IMViewControllerProtocol <NSObject>

@optional
- (void)changeTitle:(NSString *)title;

@end

@interface IMViewController : UIViewController<IMViewControllerProtocol>

@end
