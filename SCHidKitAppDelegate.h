//
//  SCHidKitAppDelegate.h
//  SCHidKit
//
//  Created by vincent on 8/20/10.
//  Copyright 2010 Ortery Technologies, Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SCHidKitAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
