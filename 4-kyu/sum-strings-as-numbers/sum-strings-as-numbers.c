            {
                free(buf);
                return NULL; // 입력은 숫자만 허용
            }
            da = (int)(ca - '0');
            --enda;
            --ia;
        }
​
        if (ib > 0)
        {
            char cb = *endb;
            if (cb < '0' || cb > '9')
            {
                free(buf);
                return NULL;
            }
            db = (int)(cb - '0');
            --endb;
            --ib;
        }
​
        int sum = da + db + carry;
        carry = sum / 10;
        int digit = sum % 10;
​
        buf[--pos] = (char)('0' + digit);
    }
​
    // 작성된 실제 길이
    size_t digits_written = write - pos;
​
    // 결과를 앞쪽으로 당김
    memmove(buf, buf + pos, digits_written);
    buf[digits_written] = '\0';
​
    // 정확 길이로 축소 (옵션)
    char *out = (char *)realloc(buf, digits_written + 1);
    if (!out)
    {
        out = buf; // 축소 실패 시 기존 버퍼 반환
    }
​
    return out;
}