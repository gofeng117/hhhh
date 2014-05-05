//
//  ASIHttpTestAppDelegate.h
//  ASIHttpTest
//
//  Created by wxg on 13-7-10.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ASIHttpTestViewController;

@interface ASIHttpTestAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    ASIHttpTestViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ASIHttpTestViewController *viewController;

@end

