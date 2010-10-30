//
//  WebViewExternalFontsAppDelegate.h
//  WebViewExternalFonts
//
//  Created by Sheng Luo on 10/30/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WebViewExternalFontsViewController;

@interface WebViewExternalFontsAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    WebViewExternalFontsViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet WebViewExternalFontsViewController *viewController;

@end

