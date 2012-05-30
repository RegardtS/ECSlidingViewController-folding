//
//  MMFoldingView.h
//  ECSlidingViewController
//
//  Created by Michael Manesh on 5/15/12.
//  Copyright (c) 2012
//

#import <UIKit/UIKit.h>

@interface ECFoldingView : UIView

// takes a "screenshot" of the view, then splits it in half so it can fold it
- (id)initWithView:(UIView *)view;

- (void)enableBoundsAnimationWithDuration:(float)time;
- (void)disableBoundsAnimation;

@end
