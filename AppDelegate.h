//
//  AppDelegate.h
//  mystash
//
//  Created by Akber Sayani on 26/08/2015.
//  Copyright (c) 2015 Akber Sayani. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) CLLocation *userLocation;
- (void)setRootController;


@end

