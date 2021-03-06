/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/BulletinBoardPlugins/MailDataProvider.bundle/MailDataProvider
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _MFDelayedMessage : NSObject {

	id _message;
	NSString* _identifier;
	/*^block*/ id _fireBlock;
	double _fireDate;

}

@property (nonatomic,retain) id message;                       //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double fireDate;                  //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy) id fireBlock;                       //@synthesize fireBlock=_fireBlock - In the implementation block
-(void)setFireBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)fireBlock;
-(id)initWithMessage:(id)arg1 identifier:(id)arg2 fireDate:(double)arg3 fireBlock:(/*^block*/ id)arg4 ;
-(void)dealloc;
-(id)init;
-(void)setFireDate:(double)arg1 ;
-(id)message;
-(id)identifier;
-(void)setMessage:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(double)fireDate;
@end

