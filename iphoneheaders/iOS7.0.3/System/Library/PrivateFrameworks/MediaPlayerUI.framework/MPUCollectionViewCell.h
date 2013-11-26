/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class MPImageCache, MPImageCacheRequest;

@interface MPUCollectionViewCell : UICollectionViewCell {

	MPImageCache* _imageCache;
	MPImageCacheRequest* _imageRequest;

}

@property (nonatomic,retain) MPImageCache * imageCache;                       //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) MPImageCacheRequest * imageRequest;              //@synthesize imageRequest=_imageRequest - In the implementation block
-(id)imageCache;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setArtworkImage:(id)arg1 ;
-(void)setImageRequest:(id)arg1 ;
-(id)imageRequest;
-(void).cxx_destruct;
-(void)setImageCache:(id)arg1 ;
@end
