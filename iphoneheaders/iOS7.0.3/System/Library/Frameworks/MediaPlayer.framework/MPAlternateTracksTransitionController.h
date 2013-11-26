/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MPTransitionController.h>

@class MPVideoViewController, UIImageView;

@interface MPAlternateTracksTransitionController : MPTransitionController {

	MPVideoViewController* _videoController;
	UIImageView* _snapshotCoverImageView;

}

@property (assign,nonatomic,__weak) MPVideoViewController * videoController;              //@synthesize videoController=_videoController - In the implementation block
-(void)performTransition:(unsigned)arg1 ;
-(id)videoController;
-(void)setVideoController:(id)arg1 ;
-(void).cxx_destruct;
@end
