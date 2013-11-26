/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Wallpaper/Wallpaper-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel;

@interface PUPhotosPanoramaHeaderView : UICollectionReusableView {

	NSString* _title;
	UILabel* _titleLabel;

}

@property (assign,nonatomic) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)titleLabel;
-(void)prepareForReuse;
-(void)setTitleLabel:(id)arg1 ;
-(void).cxx_destruct;
@end
