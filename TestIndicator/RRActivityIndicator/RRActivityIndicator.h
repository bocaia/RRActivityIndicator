//
//  RRActivityIndicator.h
//  TestIndicator
//
//  Created by stephenliu on 7/1/15.
//  Copyright (c) 2015 stephenliu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RRActivityIndicator : UIView

- (instancetype)initWithActivityIndicatorWithImage:(UIImage *)indicatorImage;

@property(nonatomic) CGFloat speed;
@property(nonatomic) BOOL hidesWhenStopped;

- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;
@end