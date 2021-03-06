//  vim: expandtab:ts=4:sw=4
//  Copyright 2009 Todd Ditchendorf
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <Cocoa/Cocoa.h>

@interface TDListItem : NSView {
	@private
		NSString *reuseIdentifier;
		NSUInteger index;
		BOOL selected;
}

- (id)initWithFrame:(NSRect)frame reuseIdentifier:(NSString *)s;

- (void)prepareForReuse;

- (NSImage *)draggingImage;

@property (nonatomic, copy) NSString *reuseIdentifier;
@property (nonatomic, assign, getter=isSelected) BOOL selected;
@property (nonatomic, assign, readonly) NSUInteger index;
@end
