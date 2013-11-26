/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray;

@interface PTSHUDRow : NSObject {

	float _height;
	NSArray* _controls;

}

@property (assign,nonatomic) float height;                    //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSArray * controls;              //@synthesize controls=_controls - In the implementation block
+(id)rowWithHeight:(float)arg1 controls:(id)arg2 ;
-(float)height;
-(void)setHeight:(float)arg1 ;
-(void)setControls:(id)arg1 ;
-(id)controls;
-(void).cxx_destruct;
@end
