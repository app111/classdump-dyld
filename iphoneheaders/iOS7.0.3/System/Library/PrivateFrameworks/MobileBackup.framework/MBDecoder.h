/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSData;

@interface MBDecoder : NSObject {

	NSData* _data;
	unsigned _offset;
	int _mark;

}

@property (nonatomic,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned offset; 
+(id)decoderWithData:(id)arg1 ;
-(id)decodeData;
-(short)decodeInt16;
-(long long)decodeInt64;
-(long)decodeInt32;
-(BOOL)decodeInt8;
-(void)decodeBytes:(void*)arg1 length:(unsigned)arg2 ;
-(double)decodeVersion;
-(id)decodeDate;
-(void)dealloc;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(void)reset;
-(BOOL)isDone;
-(void)mark;
-(id)decodeString;
@end
