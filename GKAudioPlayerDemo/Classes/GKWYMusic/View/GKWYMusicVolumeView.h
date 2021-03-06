//
//  GKWYMusicVolumeView.h
//  GKAudioPlayerDemo
//
//  Created by QuintGao on 2017/9/8.
//  Copyright © 2017年 高坤. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol GKWYMusicVolumeViewDelegate <NSObject>

- (void)volumeSlideTouchBegan;
- (void)volumeSlideTouchEnded;

@end

@interface GKWYMusicVolumeView : UIView

@property (nonatomic, assign) id<GKWYMusicVolumeViewDelegate> delegate;

@end
