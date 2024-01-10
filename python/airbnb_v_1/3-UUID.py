#!/usr/bin/python3
"""
using class UUID
"""
from uuid import UUID
import uuid

print(UUID('{12345678-1234-5678-1234-567812345678}'))
print(UUID('12345678123456781234567812345678'))
print(UUID('urn:uuid:12345678-1234-5678-1234-567812345678'))
print(UUID(bytes=b'\x12\x34\x56\x78'*4))
print(UUID(bytes_le=b'\x78\x56\x34\x12\x34\x12\x78\x56' +
              b'\x12\x34\x56\x78\x12\x34\x56\x78'))
print(UUID(fields=(0x12345678, 0x1234, 0x5678, 0x12, 0x34, 0x567812345678)))
print(UUID(int=0x12345678123456781234567812345678))
print(UUID.is_safe)
print(uuid.getnode())
