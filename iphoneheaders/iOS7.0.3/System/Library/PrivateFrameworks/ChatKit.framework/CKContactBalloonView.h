/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>

@class CKMediaObject, UIImageView, UILabel;

@interface CKContactBalloonView : CKColoredBalloonView {

	CKMediaObject* _mediaObject;
	UIImageView* _chevron;
	UIImageView* _contactImageView;
	UILabel* _nameLabel;
	UILabel* _organizationLabel;

}

@property (nonatomic,retain) CKMediaObject * mediaObject;                 //@synthesize mediaObject=_mediaObject - In the implementation block
@property (nonatomic,retain) UIImageView * chevron;                       //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,retain) UIImageView * contactImageView;              //@synthesize contactImageView=_contactImageView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                         //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * organizationLabel;                 //@synthesize organizationLabel=_organizationLabel - In the implementation block
-(id)contactImageView;
-(void)setContactImageView:(id)arg1 ;
-(id)chevron;
-(void)setChevron:(id)arg1 ;
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)description;
-(UIEdgeInsets)alignmentRectInsets;
-(void)prepareForReuse;
-(void)prepareForDisplay;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)configureForMessagePart:(id)arg1 ;
-(id)mediaObject;
-(void)setMediaObject:(id)arg1 ;
-(id)organizationLabel;
-(void)setOrganizationLabel:(id)arg1 ;
@end
